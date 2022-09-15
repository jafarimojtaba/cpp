/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:58:56 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/15 13:09:52 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
	std::cout << "weapon " << this->getType() << " is created!\n";
}

Weapon::~Weapon()
{
	std::cout << this->getType() << " is destroyed!\n";
}

void Weapon::setType(std::string type){
	this->_type = type;
}

const std::string &Weapon::getType(void) const{
	std::string const &ref = this->_type;
	return(ref);
}