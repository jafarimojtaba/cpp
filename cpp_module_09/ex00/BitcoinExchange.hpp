/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 09:35:50 by mjafari           #+#    #+#             */
/*   Updated: 2023/09/03 13:13:15 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <map>
#include <ctime>

#define FILE_ERR "Error: could not open file."
#define CHECK_FIRST_LINE "Error: First line of file is not 'date | value'."
#define EMPTY_FILE "It is an empty file"
#define TXT_SEP_MISSING "Error: Seperator | in .txt is missing"
#define POSITIVE_ERR "Error: not a positive number."
#define LARG_ERR "Error: too large number."
#define DATE_ERR "Error: bad input => "


class BitcoinExchange
{
private:
    std::string							_inputfile;

	BitcoinExchange(){};

public:
    BitcoinExchange(std::string inputfile);
    BitcoinExchange(const BitcoinExchange &src);
    BitcoinExchange &operator=(const BitcoinExchange &src);
    ~BitcoinExchange();
    
    std::map<std::string, double>   read_csv_file();
    void                            calculateValue(const std::map<std::string,double>& bitcoinData, const std::string & date, const std::string& amount);
    int                             read_txt_file(const std::map<std::string,double>& bitcoinData, const std::string & filename);
    int                             checkValue(const std::string &value);
    int								errNum;
};

#endif