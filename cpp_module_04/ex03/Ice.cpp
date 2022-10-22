/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:43:50 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/20 20:48:38 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(/* args */): AMateria("ice")
{
	// std::cout << "Materia ice created!\n";
}

Ice::Ice(Ice const &src)
{
	std::cout << "Ice: Copy Constructor!\n";
	*this = src;
}

Ice& Ice::operator=(Ice const &src)
{
	if (this != &src)
	{
		this->_type = src.getType();
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice: Destructor!\n";
}

AMateria* Ice::clone() const
{
	Ice *ice = new Ice();
	return(ice);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
} 