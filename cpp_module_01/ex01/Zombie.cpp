/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:16:00 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/14 22:40:04 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int Zombie::_count = 1;

void Zombie::announce(void){
	std::cout << this->_name << " " << this->_id << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
	std::cout << this->_count << " is created!" << std::endl;
	Zombie::_count += 1;
}

void Zombie::set_name(std::string name){
	this->_name = name;
}

void Zombie::set_id(int id){
	this->_id = id;
}

Zombie::~Zombie()
{
	std::cout << this->_id << " is destroyed!" << std::endl;
}
