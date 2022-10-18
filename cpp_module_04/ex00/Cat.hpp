/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:43:35 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/18 19:09:18 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#if !defined CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private: 
	std::string _type;

public:
	Cat(/* args */);
	Cat(Cat const &src);
	Cat &operator=(Cat const &src);
	~Cat();
	void makeSound(void) const;
	std::string getType(void) const;
	void setType(std::string type);
};
#endif