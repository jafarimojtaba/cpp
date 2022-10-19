/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:18:29 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/19 11:27:19 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>
#include <string>

class AAnimal
{
protected: 
	std::string _type;

public:
	AAnimal(/* args */);
	AAnimal(AAnimal const &src);
	virtual AAnimal &operator=(AAnimal const &src);
	virtual ~AAnimal();
	virtual void makeSound(void) const = 0;
	virtual std::string getType(void) const;
	virtual void setType(std::string type);
};
#endif