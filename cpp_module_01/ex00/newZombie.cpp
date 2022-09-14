/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZambie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:46:41 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/14 21:13:32 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name ){
	Zombie *_newZambie = new Zombie(name);
	return (_newZambie);
}
