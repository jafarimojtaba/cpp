/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:14:14 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/18 20:28:01 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(/* args */)
{
	std::cout << "Brain: Default constructor called\n";
}
Brain::Brain(std::string type)
{
	this->_type = type;
	std::cout << "Brain: Default constructor called for " << this->_type << "\n";
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain: Copy constructor called\n";
	*this = src;
}

Brain& Brain::operator=(Brain const &src)
{
	std::cout << "Brain: Copy assignment operator called\n";
	if (this != &src)
	{
		this->_type = src.getType();
	}
	return(*this);
}

std::string Brain::getType(void) const{
	// std::cout << "Brain: getType member function called\n";
	return (this->_type);
}

void Brain::setType(std::string type){
	// std::cout << "Brain:setType member function called\n";
	this->_type = type;
}

Brain::~Brain(void){
	std::cout << "Brain: Destructor called for " << this->_type <<" \n";
}