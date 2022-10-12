/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:06:20 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/11 20:20:41 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(/* args */)
{
    this->setHitPoint(F_First_HP);
    this->setEnergyPoint(F_First_EP);
    this->setAttackDamage(F_First_AD);
    std::cout << "a FragTrap just created!\n";
}

FragTrap::FragTrap(std::string name)
{
    this->setName(name);
    this->setHitPoint(F_First_HP);
    this->setEnergyPoint(F_First_EP);
    this->setAttackDamage(F_First_AD);
    std::cout << "FragTrap " << name << " is just created!\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->getName() << " is desctructed!\n";
}

FragTrap::FragTrap(const FragTrap &_FragTrap)
{
    *this = _FragTrap;
    std::cout << "The FragTrap " << this->getName() << " wants to be the same as the FragTrap " << _FragTrap.getName() << "\n";
}

FragTrap &FragTrap::operator=(const FragTrap &_FragTrap)
{
    if (this != &_FragTrap)
    {
        std::cout << "Copy assignment operator called\n";
        this->setName(_FragTrap.getName());
        this->setHitPoint(_FragTrap.getHitPoint());
        this->setEnergyPoint(_FragTrap.getEnergyPoint());
        this->setAttackDamage(_FragTrap.getAttackDamage());
    }
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    if (this->getHitPoint() > 0 && this->getEnergyPoint() > 0)
    {
        std::cout << this->getName() << ": High Five friend!\n";
    }
    else
        std::cout << this->getName() << ": I'm died!\n";
}