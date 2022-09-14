/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:16:00 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/14 21:23:12 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << this->_name << " is created!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is destroyed!" << std::endl;
}
