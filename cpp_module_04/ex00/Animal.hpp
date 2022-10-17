/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:18:29 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/17 18:17:27 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
protected: 
	std::string type;

public:
	Animal(/* args */);
	Animal(Animal const &src);
	Animal &operator=(Animal const &src);
	~Animal();
	void makeSound(void) const;
	std::string getType(void) const;
};
#endif