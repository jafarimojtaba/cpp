/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:38:08 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/10 18:41:43 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string input;
	PhoneBook _phonebook;

	while (1)
	{
		// input = "";
		std::cout << "\nEnter one of the following commands: ADD, SEARCH, EXIT\n";
		std::cin >> input;
		if (input == "ADD")
		{
			_phonebook.add();
		}
		else if (input == "SEARCH")
		{
			_phonebook.search();
		}
		else if (input == "EXIT")
		{
			break;
		}
		else
			std::cout << "Please check your input!\n";
	}
}