/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:07:45 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/11 17:46:40 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap sadra("sadra");
	ClapTrap zara("zara");
	
	sadra.attack("zara");
	zara.takeDamage(1);
	zara.beRepaired(1);
	zara.attack("sadra");
	return 0;
}
