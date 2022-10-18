/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:42:56 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/18 20:58:15 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(/* args */): _type("Cat")
{
	this->_brain = new Brain(this->_type);
	std::cout << "Cat: Default constructor called\n";
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat: Copy constructor called\n";
	*this = src;
}

Cat& Cat::operator=(Cat const &src)
{
	std::cout << "Cat: Copy assignment operator called\n";
	if (this != &src)
	{
		this->_type = src.getType();
		this->_brain = src.getBrain();
	}
	return(*this);
}

std::string Cat::getType(void) const{
	// std::cout << "Cat: getType member function called\n";
	return (this->_type);
}

void Cat::setType(std::string type){
	// std::cout << "Cat:setType member function called\n";
	this->_type = type;
}

Cat::~Cat(void){
	delete (this->_brain);
	std::cout << "Cat: Destructor called\n";
}

void Cat::makeSound(void) const
{
	std::cout << "Cat sounds: imagin it:)\n";
}

Brain* Cat::getBrain(void) const
{
	return (this->_brain);
}
