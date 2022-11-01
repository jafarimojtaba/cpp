/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:53:31 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/28 18:53:28 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main(void)
{
	Data *d1 = new Data();
	Data *d2 = deserialize(serialize(d1));
	
	d1->setName("Sajjad");
	std::cout << d2->getName() << "\n";
	
	
	return (0);
}