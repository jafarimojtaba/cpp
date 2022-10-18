/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:42:56 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/18 21:53:37 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog(/* args */): _type("Dog")
{
	std::cout << "Dog: Default constructor called\n";
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog: Copy constructor called\n";
	*this = src;
}

Dog& Dog::operator=(Dog const &src)
{
	std::cout << "Dog: Copy assignment operator called\n";
	if (this != &src)
	{
		this->_type = src.getType();
	}
	return(*this);
}

std::string Dog::getType(void) const{
	// std::cout << "Dog: getType member function called\n";
	return (this->_type);
}

void Dog::setType(std::string type){
	// std::cout << "Dog:setType member function called\n";
	this->_type = type;
}

Dog::~Dog(void){
	std::cout << "Dog: Destructor called\n";
}

void Dog::makeSound(void) const
{
	std::cout << "Dog sounds: imagin it:)\n";
}