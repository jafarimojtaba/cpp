/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:09:00 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/11 19:29:52 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(/* args */)
{
    this->_hit_point = First_HP;
    this->_energy_point = First_EP;
    this->_attack_damage = First_AD;
    std::cout << "a ClapTrap just created!\n";
}

ClapTrap::ClapTrap(std::string name): _name(name)
{
    this->_hit_point = First_HP;
    this->_energy_point = First_EP;
    this->_attack_damage = First_AD;
    std::cout << "ClapTrap " << _name <<" is just created!\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap "<< this->getName() << " is desctructed!\n";
}

ClapTrap::ClapTrap(const ClapTrap &_clapTrap)
{
	*this = _clapTrap;
    std::cout << "The ClapTrap " << this->getName() << " wants to be the same as the ClapTrap " <<_clapTrap.getName() << "\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &_clapTrap)
{
    if (this != &_clapTrap)
	{
		std::cout << "Copy assignment operator called\n";
        this->_name = _clapTrap.getName();
		this->_hit_point = _clapTrap.getHitPoint();
		this->_energy_point = _clapTrap.getEnergyPoint();
		this->_attack_damage = _clapTrap.getAttackDamage();
	}
	return(*this);
}

std::string ClapTrap::getName()const
{
    return (this->_name);
}

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

int ClapTrap::getHitPoint()const
{
    return (this->_hit_point);
}

int ClapTrap::getEnergyPoint()const
{
    return (this->_energy_point);
}

int ClapTrap::getAttackDamage()const
{
    return (this->_attack_damage);
}

void ClapTrap::setHitPoint(int amount)
{
    this->_hit_point = amount;
}
void ClapTrap::setEnergyPoint(int amount)
{
    this->_energy_point = amount;
}
void ClapTrap::setAttackDamage(int amount)
{
    this->_attack_damage = amount;
}

void ClapTrap::attack(const std::string &target)
{
     if (this->getEnergyPoint() < 1 || this->getHitPoint() < 1)
    {
        std::cout << "I'm died! have fun " << target << "\n";
        return;
    }
    else if (this->getEnergyPoint() > 0 && this->getHitPoint() > 0)
    {
        std::cout << "ClapTrap " << this->getName() << " attacks " << target << "\n";
    }
    this->setEnergyPoint(this->getEnergyPoint() -1);
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->setHitPoint(this->getHitPoint() - amount);
    if (this->getHitPoint() < 1)
    {
        std::cout << "You killed me! Are you serious?\n";
        return;
    }
    std::cout << "Noo, It costs me " << amount << " damage point\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->getEnergyPoint() < 1 || this->getHitPoint() < 1)
    {
        std::cout << "I'm  already dead! \n";
        return;
    }
    else
    {
        this->setEnergyPoint(this->getEnergyPoint() -1);
        this->setHitPoint(this->getHitPoint() + amount);
        if (this->getHitPoint() > First_HP)
            this->setHitPoint(First_HP);
        std::cout << "OK I'm  back! \n";
    }
      if (this->getEnergyPoint() < 1)
        std::cout << "I'm  died! \n";
}