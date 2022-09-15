/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:19:12 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/15 21:31:49 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void Harl::complain( std::string level )
{
	FnPtr dp = {&Harl::debug};
	dp;
	// pointer pt = {&Karen::debug};
	// std::map <std::string, FnPtr> myMap;
	// myMap["DEBUG"] = &Harl::debug;
	// myMap["INFO"] = &Harl::info;
	// myMap["WARNING"] = &Harl::warning;
	// myMap["ERROR"] = &Harl::error;
	// std::string fp(level);
	// myMap["DEBUG"];
	// this->debug();
}

void Harl::debug( void )
{
	std::cout << "\"DEBUG\" level: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n";
}

void Harl::info( void )
{
	std::cout << "\"INFO\" level: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning( void )
{
	std::cout << "\"WARNING\" level: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error( void )
{
	std::cout << "\"ERROR\" level: This is unacceptable! I want to speak to the manager now.\n";
}
