/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:07:45 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/11 19:26:01 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main(void) {

	ScavTrap d("Papias");
	std:: cout << "d name is " << d.getName() << std::endl;
	std:: cout << "d has Damage " << d.getAttackDamage() << std::endl;
	std:: cout << "d has Energy " << d.getEnergyPoint() << std::endl;
	std:: cout << "d has health " << d.getHitPoint() << std::endl;
	std::cout << "=====" << std::endl;

	ScavTrap s("Karioliis");
	std:: cout << "s name is " << s.getName() << std::endl;
	std:: cout << "s has Damage " << s.getAttackDamage() << std::endl;
	std:: cout << "s has Energy " << s.getEnergyPoint() << std::endl;
	std:: cout << "s has health " << s.getHitPoint() << std::endl;
	std::cout << "=====" << std::endl;

	s.attack("Papias");
	d.takeDamage(5);
	std:: cout << "d has health " << d.getHitPoint() << std::endl;
	d.attack("Karioliis");
	s.takeDamage(20);
	d.guardGate();
	std:: cout << "d has energy " << d.getEnergyPoint() << std::endl;
	std:: cout << "s has energy " << s.getEnergyPoint() << std::endl;
	d.beRepaired(1000);
	std:: cout << "d has health " << d.getEnergyPoint() << std::endl;
	return (0);
}
