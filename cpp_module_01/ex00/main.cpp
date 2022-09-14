/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:08:48 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/14 21:27:11 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *z_one;
	Zombie z_three("z_three");
	z_one = newZombie("z_one");
	z_one->announce();
	randomChump("z_two");
	delete(z_one);
	return (0);
}