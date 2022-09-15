/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:26:29 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/15 19:26:38 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main(int argc, char **argv)
{
	std::size_t pos;
	std::ifstream ifs(argv[1]);
	std::ofstream ofs("text.replace");
	std::string str1, str2, temp;
	std::stringstream buff;
	if (argc != 4)
	{
		std::cout << "please enter all parameters!\n";
		return (1);
	}
	if (!ifs.good())
	{
		std:: cout << "Error while opening " << argv[1] << std::endl;
		return(1);
	}
	buff << ifs.rdbuf();
	ifs.close();
	temp = buff.str();
	
	str1 = argv[2];
	str2 = argv[3];
	while ((pos = temp.find(str1)) != std::string::npos)
	{
		temp.erase(pos, str1.length());
		temp.insert(pos, str2);
	}
	ofs << temp;
	return (0);
}
