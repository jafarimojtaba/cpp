/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:06:39 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/11 21:57:31 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

#define S_First_HP 100
#define S_First_EP 50
#define S_First_AD 20

class ScavTrap : public virtual ClapTrap
{
private:
	/* data */
public:
	ScavTrap(/* args */);
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(const ScavTrap &_scavTrap);
    ScavTrap& operator=(const ScavTrap &_scavTrap);
	void guardGate();
    void attack(const std::string &target);
};

#endif