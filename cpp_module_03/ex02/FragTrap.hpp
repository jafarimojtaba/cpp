/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:06:39 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/11 20:19:12 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

#define F_First_HP 100
#define F_First_EP 100
#define F_First_AD 30

class FragTrap : public ClapTrap
{
private:
	/* data */
public:
	FragTrap(/* args */);
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(const FragTrap &_FragTrap);
    FragTrap& operator=(const FragTrap &_FragTrap);
	void highFivesGuys(void);
};

#endif