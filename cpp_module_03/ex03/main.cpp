/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:07:45 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/18 13:40:08 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap *pointer = new DiamondTrap ("James");
	DiamondTrap pleb("pleb");
	pleb.setAttackDamage(900);
	pleb.ScavTrap::attack("someone");
	pleb.guardGate();
	pleb.highFivesGuys();
	pleb.whoAmI();
	delete pointer;
	return (0);
}
