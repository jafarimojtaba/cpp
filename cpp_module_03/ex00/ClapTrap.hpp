/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:08:45 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/11 12:38:52 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

#define First_HP 10
#define First_EP 10
#define First_AD 0

class ClapTrap
{
private:
    std::string _name;
    int _hit_point;
    int _energy_point;
    int _attack_damage;
    
public:
    ClapTrap(/* args */);
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap &_clapTrap);
    ClapTrap& operator=(const ClapTrap &_clapTrap);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName()const;
    void setName(std::string name);
    int getHitPoint()const;
    int getEnergyPoint()const;
    int getAttackDamage()const;
};

#endif
