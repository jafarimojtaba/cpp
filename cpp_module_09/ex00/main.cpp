/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 09:36:14 by mjafari           #+#    #+#             */
/*   Updated: 2023/09/03 13:13:27 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
	const char* cstr;
	if (argc !=2)
	{
		std::cerr << "Error: could not open file.\n";
		return EXIT_FAILURE;
	}
	else
	{
		cstr = argv[1];
		std::string str1(cstr);
		BitcoinExchange btc(str1);
	}
	return EXIT_SUCCESS;
}