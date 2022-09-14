/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:45:37 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/14 21:10:52 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string _name;
public:
	void announce(void);
	Zombie(std::string name);
	~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
