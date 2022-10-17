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
	std::cout << "Animal Default constructor called\n";
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal Copy constructor called\n";
	*this = src;
}

Animal& Animal::operator=(Animal const &src)
{
	if (this != &src)
	{
		std::cout << "Copy assignment operator called\n";
		this->type = src.getType();
	}
	return(*this);
}

int Animal::getRawBits(void) const{
	std::cout << "getRawBits member function called\n";
	return (this->number);
}

void Animal::setRawBits(int const raw){
	std::cout << "setRawBits member function called\n";
	this->number = raw;
}

Animal::~Animal(void){
	std::cout << "Destructor called\n";
}