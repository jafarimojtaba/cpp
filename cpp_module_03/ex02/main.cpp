/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:07:45 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/11 19:43:54 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void) {

	FragTrap ft("First");
	std:: cout << "ft name is " << ft.getName() << std::endl;
	std:: cout << "ft has Damage " << ft.getAttackDamage() << std::endl;
	std:: cout << "ft has Energy " << ft.getEnergyPoint() << std::endl;
	std:: cout << "ft has health " << ft.getHitPoint() << std::endl;
	std::cout << "=====" << std::endl;
	FragTrap ft2("Second");
	std:: cout << "ft2 name is " << ft2.getName() << std::endl;
	std:: cout << "ft2 has Damage " << ft2.getAttackDamage() << std::endl;
	std:: cout << "ft2has Energy " << ft2.getEnergyPoint() << std::endl;
	std:: cout << "ft2 has health " << ft2.getHitPoint() << std::endl;
	std::cout << "=====" << std::endl;
	ft.attack("Second");
	ft2.takeDamage(5);
	std:: cout << "ft2 has health " << ft2.getHitPoint() << std::endl;
	ft2.attack("First");
	ft.takeDamage(200);
	ft2.highFivesGuys();
	ft.highFivesGuys();
	return (0);
}
