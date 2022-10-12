/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:06:20 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/11 20:20:06 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(/* args */)
{
    this->setHitPoint(S_First_HP);
    this->setEnergyPoint(S_First_EP);
    this->setAttackDamage(S_First_AD);
    std::cout << "a ScavTrap just created!\n";
}

ScavTrap::ScavTrap(std::string name)
{
    this->setName(name);
    this->setHitPoint(S_First_HP);
    this->setEnergyPoint(S_First_EP);
    this->setAttackDamage(S_First_AD);
    std::cout << "ScavTrap " << name << " is just created!\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->getName() << " is desctructed!\n";
}

ScavTrap::ScavTrap(const ScavTrap &_ScavTrap)
{
    *this = _ScavTrap;
    std::cout << "The ScavTrap " << this->getName() << " wants to be the same as the ScavTrap " << _ScavTrap.getName() << "\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &_ScavTrap)
{
    if (this != &_ScavTrap)
    {
        std::cout << "Copy assignment operator called\n";
        this->setName(_ScavTrap.getName());
        this->setHitPoint(_ScavTrap.getHitPoint());
        this->setEnergyPoint(_ScavTrap.getEnergyPoint());
        this->setAttackDamage(_ScavTrap.getAttackDamage());
    }
    return (*this);
}

void ScavTrap::guardGate()
{
    if (this->getHitPoint() > 0 && this->getEnergyPoint() > 0)
    {
        std::cout << this->getName() << " is now in Gate keeper mode!\n";
    }
    else
        std::cout << this->getName() << ": I'm died!\n";
}
void ScavTrap::attack(const std::string &target)
{
    if (this->getEnergyPoint() < 1 || this->getHitPoint() < 1)
    {
        std::cout << "I'm died! have fun " << target << "\n";
        return;
    }
    else if (this->getEnergyPoint() > 0 && this->getHitPoint() > 0)
    {
        std::cout << "ScavTrap " << this->getName() << " attacks " << target << "\n";
    }
    this->setEnergyPoint(this->getEnergyPoint() - 1);
}
