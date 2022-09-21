/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:18:23 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/21 17:41:52 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_bit = 8;

Fixed::Fixed(/* args */) : number(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called\n";
	*this = src;
}

Fixed& Fixed::operator=(Fixed const &src)
{
	if (this != &src)
	{
		std::cout << "Copy assignment operator called\n";
		this->number = src.getRawBits();
	}
	return(*this);
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called\n";
	return (this->number);
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called\n";
	this->number = raw;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called\n";
}