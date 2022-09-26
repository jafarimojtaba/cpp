/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:18:23 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/24 15:10:37 by mjafari          ###   ########.fr       */
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

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
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

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called\n";
	return (this->number);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->number = raw;
}

int Fixed::toInt(void) const
{
	return (this->getRawBits() / (1 << this->fractional_bit));
}

float Fixed::toFloat(void) const
{
	return (double)this->getRawBits() / (double)(1 << this->fractional_bit);
}

Fixed &Fixed::operator=(Fixed const &src)
{
	if (this != &src)
	{
		std::cout << "Copy assignment operator called\n";
		this->number = src.getRawBits();
	}
	return (*this);
}

bool Fixed::operator<(Fixed const &src) const
{
	return(this->getRawBits() < src.getRawBits());
}
bool Fixed::operator>(Fixed const &src) const
{
	return (this->getRawBits() > src.getRawBits());
}
bool Fixed::operator<=(Fixed const &src) const
{
	return(this->getRawBits() <= src.getRawBits());
}
bool Fixed::operator>=(Fixed const &src) const
{
	return (this->getRawBits() >= src.getRawBits());
}
bool Fixed::operator==(Fixed const &src) const
{
	return(this->getRawBits() == src.getRawBits());
}
bool Fixed::operator!=(Fixed const &src) const
{
	return (this->getRawBits() != src.getRawBits());
}

Fixed Fixed::operator+(Fixed const &src) const
{
	return (Fixed(this->toFloat() + src.toFloat()));
}
Fixed Fixed::operator-(Fixed const &src) const
{
	return (Fixed(this->toFloat() - src.toFloat()));
}
Fixed Fixed::operator*(Fixed const &src) const
{
	return (Fixed(this->toFloat() * src.toFloat()));
}
Fixed Fixed::operator/(Fixed const &src) const
{
	return (Fixed(this->toFloat() / src.toFloat()));
}
Fixed &Fixed::operator++(void)
{
	this->number++;
	return (*this);
}
Fixed &Fixed::operator--(void)
{
	this->number--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return (temp);
}
Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return (temp);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b){
	return (a < b ? a : b);
}
const Fixed& Fixed::max(Fixed const &a, Fixed const &b){
	return (a > b ? a : b);
}

std::ostream &operator<<(std::ostream &stream, Fixed const &ref)
{
	return (stream << ref.toFloat());
}
