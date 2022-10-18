/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:42:56 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/18 18:46:16 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat(/* args */): _type("WrongCat")
{
	std::cout << "WrongCat: Default constructor called\n";
}

WrongCat::WrongCat(WrongCat const &src)
{
	std::cout << "WrongCat: Copy constructor called\n";
	*this = src;
}

WrongCat& WrongCat::operator=(WrongCat const &src)
{
	std::cout << "WrongCat: Copy assignment operator called\n";
	if (this != &src)
	{
		this->_type = src.getType();
	}
	return(*this);
}

std::string WrongCat::getType(void) const{
	// std::cout << "WrongCat: getType member function called\n";
	return (this->_type);
}

void WrongCat::setType(std::string type){
	// std::cout << "WrongCat:setType member function called\n";
	this->_type = type;
}

WrongCat::~WrongCat(void){
	std::cout << "WrongCat: Destructor called\n";
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sounds: imagin it:)\n";
}