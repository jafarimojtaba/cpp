/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:42:39 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/20 20:31:29 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria: Default cunstructor!\n";
}

AMateria::AMateria(std::string const &type): _type(type)
{
	// std::cout << "Materia " << type << " created\n";
}

AMateria::AMateria(AMateria const &src)
{
	std::cout << "AMateria: Copy Cunstructor!\n";
	*this = src;
}

AMateria& AMateria::operator=(AMateria const &src)
{
	std::cout << "AMateria: Equal Operator!\n";
	if (this != &src)
	{
		this->_type = src.getType();
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria: Destructor!\n";
}


std::string const& AMateria::getType() const// Returns the materia type
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}
