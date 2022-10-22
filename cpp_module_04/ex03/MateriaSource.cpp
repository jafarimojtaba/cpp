/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:56:40 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/20 20:45:17 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(/* args */)
{
	// std::cout << "MateriaSource: Default Cunstructor\n";
	for (size_t i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource &src)
{
	std::cout << "MateriaSource: Copy Cunstructor\n";
	*this = src;
}
MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
	std::cout << "MateriaSource: Equal Operator\n";
	if (this != &src)
	{
		for (size_t i = 0; i < 4; i++)
		{
			this->_materia[i] = src._materia[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource: Destructor!\n";
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_materia[i])
		{
			delete this->_materia[i];
			this->_materia[i] = NULL;
		}
	}
}
void MateriaSource::learnMateria(AMateria *materiNew)
{
	if (!materiNew->getType().compare("ice") && !materiNew->getType().compare("cure"))
	{
		std::cout << "Materia can only be type of ice or cure\n";
		return;
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = materiNew;
			std::cout << materiNew->getType() << " learned\n";
			return;
		}
	}
	std::cout << "Sorry, No Place for a new Materia\n";
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_materia[i] && !(this->_materia[i]->getType().compare(type)))
		{
			return (this->_materia[i]->clone());
		}
	}
		std::cout << "type not found\n";
	return (0);
}
