/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:59:44 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/22 15:02:00 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	std::cout << this->_name << " is created!" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->_name << " died!\n";
}

void HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_Weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& wp)
{
	this->_Weapon = &wp;
}