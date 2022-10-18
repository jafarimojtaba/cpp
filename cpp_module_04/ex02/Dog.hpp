/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:43:35 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/18 20:57:27 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#if !defined DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private: 
	std::string _type;
	Brain *_brain;

public:
	Dog(/* args */);
	Dog(Dog const &src);
	Dog &operator=(Dog const &src);
	~Dog();
	void makeSound(void) const;
	std::string getType(void) const;
	void setType(std::string type);
	Brain* getBrain(void) const;
};
#endif