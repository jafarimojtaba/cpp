/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:18:23 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/11 17:37:40 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(/* args */)
{
	std::cout << "AAnimal: Default constructor called\n";
}

AAnimal::AAnimal(AAnimal const &src)
{
	std::cout << "AAnimal: Copy constructor called\n";
	*this = src;
}

AAnimal& AAnimal::operator=(AAnimal const &src)
{
	std::cout << "AAnimal: Copy assignment operator called\n";
	if (this != &src)
	{
		this->_type = src.getType();
	}
	return(*this);
}

std::string AAnimal::getType(void) const{
	// std::cout << "AAnimal: getType member function called\n";
	return (this->_type);
}

void AAnimal::setType(std::string type){
	// std::cout << "AAnimal:setType member function called\n";
	this->_type = type;
}

AAnimal::~AAnimal(void){
	std::cout << "AAnimal: Destructor called\n";
}
