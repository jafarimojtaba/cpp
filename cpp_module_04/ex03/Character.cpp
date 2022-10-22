/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:04:09 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/20 20:51:02 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <stdio.h>

Character::Character(/* args */): _name("Character"), _materia(new AMateria*[4]())
{
	std::cout<< "Character: Default Cunstructor called!\n";
}
Character::Character(std::string name): _name(name), _materia(new AMateria*[4]())
{
	std::cout<< "Character " << name << " Created!\n";
}
Character::Character(Character const &src)
{
	std::cout<< "Character: Copy Cunstructor!\n";
	this->_materia = new AMateria*[4]();
	*this = src;
}
void deleteMateria(AMateria** materia)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (materia[i])
		{
			delete (materia[i]);
		}
	}
	delete [] materia;
}
Character &Character::operator=(Character const &src)
{
	std::cout<< "Character: Equal Operator!\n";
	if (this != &src)
	{
		this->_name = src.getName();
		if (this->_materia)
			deleteMateria(this->_materia);
		AMateria **materiaNew = new AMateria*[4];
		for (size_t i = 0; i < 4; i++)
		{
			if (src._materia[i])
				materiaNew[i] = src._materia[i]->clone();
			else
				materiaNew[i] = NULL;
		}
		this->_materia = materiaNew;
	}
	return (*this);
}
Character::~Character()
{
	std::cout<< "Character: Destructor!\n";
	deleteMateria(this->_materia);
}
std::string const &Character::getName() const
{
	return (this->_name);
}
void Character::equip(AMateria *m)
{
	if (!m)
	{
		std::cout <<" The Materia is not available!\n";
		return;
	}
	int i = 0;
	while (this->_materia[i])
	{
		if (!this->_materia[i])
			break;
		i++;
	}
	if (i == 3 && this->_materia[i])
	{
		std::cout << "The inventory is full." << std::endl;
		return;
	}
	this->_materia[i] = m;
	std::cout<< this->getName() << " is quiped by " << m->getType() << "\n";
}
void Character::unequip(int idx)
{
	if (idx > -1 && idx < 4 && this->_materia[idx])
	{
		std::cout << "Materia " << idx << " unequiped!\n";
		this->_materia[idx] = NULL;
	}
	else
		std::cout<< "Materia " << idx  << " is not valid!\n";
}
void Character::use(int idx, ICharacter &target)
{
	AMateria *materiaUse = this->getMateria(idx);
	if (materiaUse && (!materiaUse->getType().compare("ice") || !materiaUse->getType().compare("cure")))
	{
		std::cout << this->getName() << " ";
		materiaUse->use(target);
	}
	else
	{
		std::cout << "not equiped with " << idx << "!\n"; 
		delete materiaUse;
	}
}
AMateria* Character::getMateria(int i)
{
	return this->_materia[i];
}
