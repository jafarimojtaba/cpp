/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:18:23 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/22 13:59:22 by mjafari          ###   ########.fr       */
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

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called\n";
	this->number = n * (1 << this->fractional_bit);
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor is called\n";
	this->number = roundf(n * (1 << this->fractional_bit));
}

int Fixed::getRawBits(void) const{
	// std::cout << "getRawBits member function called\n";
	return (this->number);
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called\n";
	this->number = raw;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called\n";
}

int Fixed::toInt(void) const{
	return (this->getRawBits() / (1 << this->fractional_bit));
}

float Fixed::toFloat(void) const{
	return (double)this->getRawBits() / (double) (1 << this->fractional_bit);
}

std::ostream& operator<<(std::ostream &stream, Fixed const &ref) {
	return (stream << ref.toFloat());
}
