/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:19:12 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/16 18:02:28 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Instance created!\n";
}

Harl::~Harl()
{
	std::cout << "Instance deleted!\n";
}

void Harl::complain( std::string level )
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	FnPtr ptrs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (size_t i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*ptrs[i])();
			return;
		}
	}
	std::cout << "Please check the input!\n";
	// std::map <std::string, FnPtr> myMap;
	// myMap["DEBUG"] = &Harl::debug;
	// myMap["INFO"] = &Harl::info;
	// myMap["WARNING"] = &Harl::warning;
	// myMap["ERROR"] = &Harl::error;
	// (this->*myMap[level])();
}

void Harl::debug( void )
{
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n\n";
}

void Harl::info( void )
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void Harl::warning( void )
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n\n";
}

void Harl::error( void )
{
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now.\n";
}
