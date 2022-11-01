/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:14:26 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/28 20:33:17 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <random>
#include <iostream>
// #include <unistd.h>

Base *generate(void)
{
	srand(time(NULL));
	// usleep(1000000);
	switch (rand() % 3)
	{
	case 0:
		std::cout << "A is created\n";
		return (new A());
	case 1:
		std::cout << "B is created\n";
		return (new B());
	case 2:
		std::cout << "C is created\n";
		return (new C());
	}
	return (NULL);
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Type A is detected!\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "Type B is detected!\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "Type C is detected!\n";
	else
		std::cout << "Type is not detected!\n";
}

void identify(Base &p)
{
	Base b;
	try
	{
		b = dynamic_cast<A &>(p);
		std::cout << "Type A is detected!\n";
	}
	catch (const std::exception &e)
	{
		try
		{
			b = dynamic_cast<B &>(p);
			std::cout << "Type B is detected!\n";
		}
		catch (const std::exception &e)
		{
			try
			{
				b = dynamic_cast<C &>(p);
				std::cout << "Type C is detected!\n";
			}
			catch (const std::exception &e)
			{
				std::cout << "Type is not detected!\n";
			}
		}
	}
}