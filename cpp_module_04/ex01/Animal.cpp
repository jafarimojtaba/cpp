/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:18:23 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/11 17:37:40 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(/* args */)
{
	std::cout << "Animal: Default constructor called\n";
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal: Copy constructor called\n";
	*this = src;
}

Animal& Animal::operator=(Animal const &src)
{
	std::cout << "Animal: Copy assignment operator called\n";
	if (this != &src)
	{
		this->_type = src.getType();
	}
	return(*this);
}

std::string Animal::getType(void) const{
	// std::cout << "Animal: getType member function called\n";
	return (this->_type);
}

void Animal::setType(std::string type){
	// std::cout << "Animal:setType member function called\n";
	this->_type = type;
}

Animal::~Animal(void){
	std::cout << "Animal: Destructor called\n";
}

void Animal::makeSound(void) const
{
	std::cout << "Animal sounds: imagin it:)\n";
}