/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:18:29 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/18 18:43:09 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal
{
protected: 
	std::string _type;

public:
	WrongAnimal(/* args */);
	WrongAnimal(WrongAnimal const &src);
	WrongAnimal &operator=(WrongAnimal const &src);
	virtual ~WrongAnimal();
	void makeSound(void) const;
	virtual std::string getType(void) const;
	void setType(std::string type);
};
#endif