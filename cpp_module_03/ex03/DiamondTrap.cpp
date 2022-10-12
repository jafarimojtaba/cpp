/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:57:46 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/11 22:38:47 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(/* args */)
{
    std::cout << "a DiamondTrap just created!\n";
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
    this->_name = name;
    this->setHitPoint(FragTrap::getHitPoint());
    this->setEnergyPoint(ScavTrap::getEnergyPoint());
    this->setAttackDamage(FragTrap::getAttackDamage());
    std::cout << "DiamondTrap " << name << " is just created!\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->getName() << " is desctructed!\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &_DiamondTrap)
{
    *this = _DiamondTrap;
    std::cout << "The DiamondTrap " << this->getName() << " wants to be the same as the DiamondTrap " << _DiamondTrap.getName() << "\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &_DiamondTrap)
{
    if (this != &_DiamondTrap)
    {
        std::cout << "Copy assignment operator called\n";
        this->setName(_DiamondTrap.ClapTrap::getName());
        this->setHitPoint(_DiamondTrap.FragTrap::getHitPoint());
        this->setEnergyPoint(_DiamondTrap.ScavTrap::getEnergyPoint());
        this->setAttackDamage(_DiamondTrap.FragTrap::getAttackDamage());
    }
    return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My Diamond name is " << this->_name << std::endl;
	std::cout << "My ClapTrap name is " << this->ClapTrap::getName() << std::endl;
}