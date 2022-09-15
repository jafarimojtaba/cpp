/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:59:15 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/15 13:11:22 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wp): _name(name), _Weapon(wp)
{
	std::cout << this->_name << " is created!" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->_name << " died!\n";
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_Weapon.getType() << std::endl;
}
