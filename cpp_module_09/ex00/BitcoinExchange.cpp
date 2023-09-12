/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 09:36:11 by mjafari           #+#    #+#             */
/*   Updated: 2023/09/03 13:27:01 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string inputfile): _inputfile(inputfile)
{
    read_txt_file(read_csv_file(), _inputfile);
}

BitcoinExchange::~BitcoinExchange(){}


int BitcoinExchange::read_txt_file(const std::map<std::string,double>& bitcoinData, const std::string & filename)
{
    std::string     firstLine;
    std::string     rest;
    
    std::ifstream   fileIn(filename);
    
    std::getline(fileIn,firstLine);
    if (firstLine.compare("date | value") != 0){
        std::cerr << CHECK_FIRST_LINE << std::endl;
        return 1;
    }
    int c = 0;
    while (std::getline(fileIn,rest))
    {
        c++;
        std::istringstream  istrStream(rest);
        std::string			date;
    	std::string 		value;
    	char 				sep;
        
        if ( !(istrStream >> date >> sep >> value) )
		{
			std::cout <<  "Error: bad input => "  << rest << std::endl;
			continue ;
		}
        else if (istrStream >> value)
        {
            std::cout <<  "Error: bad input => "  << rest << std::endl;
			continue ;
        }
		else if ( sep != '|' )
		{
			std::cout <<  TXT_SEP_MISSING  << std::endl;
			continue ;
		}
        else if ( checkValue(value) == 2)
		{
			continue ;
		}
        else
        {
            calculateValue(bitcoinData, date, value);
        }
    }
    if (c == 0)
    std::cout << "Nothing to Calculate!\n";
    fileIn.close();
	return EXIT_SUCCESS;
}

std::map<std::string,double> BitcoinExchange::read_csv_file()
{
	std::map<std::string, double> bitcoinData;
    std::ifstream file("data.csv");
    std::string line;
	std::getline(file, line);
    while (std::getline(file, line)) {
        size_t pos = line.find(',');
        std::string date = line.substr(0, pos);
        double rate = std::stod(line.substr(pos + 1));
        bitcoinData[date] = rate;
    }
    file.close();
	return bitcoinData;
}

void BitcoinExchange::calculateValue(const std::map<std::string, double> &bitcoinData, const std::string &date, const std::string &amount)
{

    if (bitcoinData.count(date) > 0)
    {
        double rate = bitcoinData.at(date);
        double value = rate * std::stod(amount);
        std::cout << date << " => " << amount << " = " << value << std::endl;
    }
    else
    {
        std::map<std::string, double>::const_iterator iter;
        int c = 0;
        for (iter = bitcoinData.begin(); iter != bitcoinData.end(); iter++)
        {
            c++;
            if ((iter->first > date))
            {
                if (c > 1)
                {
                    iter--;
                    double rate = bitcoinData.at(iter->first);
                    double value = rate * std::stod(amount);
                    std::cout << date << " => " << amount << " = " << value << std::endl;
                    return;  
                }
                else
                {
                    std::cout << date << " => " << amount << " = " << "no rate available!" << std::endl;
                    return;
                }

            }
        }
        std::cout << date << " => " << amount << " = " << "no rate available!" << std::endl;
    }
}


int BitcoinExchange::checkValue(const std::string &value)
{
	if ( atof(value.c_str()) < 0 )
	{
		std::cout << POSITIVE_ERR << std::endl;
		this->errNum = 2;
	}
	else if ( atof(value.c_str()) > 1000 )
	{
		std::cout << LARG_ERR << std::endl;
		this->errNum = 2;
	}
	else
		this->errNum = 0;

	return 	this->errNum;
}