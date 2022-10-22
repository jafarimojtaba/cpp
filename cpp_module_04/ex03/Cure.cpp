/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:43:50 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/19 19:59:30 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(/* args */): AMateria("cure")
{
	// std::cout << "Materia cure created!\n";
}

Cure::Cure(Cure const &src)
{
	std::cout << "Cure: Copy Constructor!\n";
	*this = src;
}

Cure& Cure::operator=(Cure const &src)
{
	if (this != &src)
	{
		this->_type = src.getType();
	}
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure: Destructor!\n";
}

AMateria* Cure::clone() const
{
	Cure *cure = new Cure();
	return(cure);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
} 