/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:18:23 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/11 17:37:40 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */)
{
	std::cout << "WrongAnimal: Default constructor called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "WrongAnimal: Copy constructor called\n";
	*this = src;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &src)
{
	std::cout << "WrongAnimal: Copy assignment operator called\n";
	if (this != &src)
	{
		this->_type = src.getType();
	}
	return(*this);
}

std::string WrongAnimal::getType(void) const{
	// std::cout << "WrongAnimal: getType member function called\n";
	return (this->_type);
}

void WrongAnimal::setType(std::string type){
	// std::cout << "WrongAnimal:setType member function called\n";
	this->_type = type;
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "WrongAnimal: Destructor called\n";
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sounds: imagin it:)\n";
}