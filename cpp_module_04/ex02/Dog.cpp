/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:42:56 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/18 21:48:53 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog(/* args */): _type("Dog")
{
	this->_brain = new Brain(this->_type);
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
		this->_brain = new Brain();
		*(this->_brain) = *(src.getBrain());
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
	delete (this->_brain);
	std::cout << "Dog: Destructor called\n";
}

void Dog::makeSound(void) const
{
	std::cout << "Dog sounds: imagin it:)\n";
}

Brain* Dog::getBrain(void) const
{
	return (this->_brain);
}