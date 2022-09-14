/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:43:43 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/14 22:31:29 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ){
	Zombie *zombie_arr = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombie_arr[i].set_name(name);
		zombie_arr[i].set_id(i + 1);
		zombie_arr[i].announce();
	}
	return(zombie_arr);
}
