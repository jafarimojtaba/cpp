/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:05:56 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/18 21:52:44 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
	Animal *an[6];
	// const Dog d1;
	// const Dog d2 = d1;
	for (size_t i = 0; i < 3; i++)
	{
		an[i] = new Dog();
	}
	for (size_t i = 3; i < 6; i++)
	{
		an[i] = new Cat();
	}
	for (size_t i = 0; i < 6; i++)
	{
		delete an[i];
	}

	return 0;
}