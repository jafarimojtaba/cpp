/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:44:06 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/19 17:51:39 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice(/* args */);
	Ice(Ice const &src);
	Ice &operator=(Ice const &src);
	~Ice();
	virtual AMateria *clone() const;
};

#endif