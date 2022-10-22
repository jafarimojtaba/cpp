/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:44:06 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/19 17:51:39 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure(/* args */);
	Cure(Cure const &src);
	Cure &operator=(Cure const &src);
	~Cure();
	virtual AMateria *clone() const;
	virtual void use(ICharacter& target);
};

#endif