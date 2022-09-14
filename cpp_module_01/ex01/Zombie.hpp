/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:45:37 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/14 22:11:35 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string _name;
	int _id;
	static int _count;
public:
	void announce(void);
	void set_name(std::string name);
	void set_id(int n);
	Zombie();
	~Zombie();
};

Zombie*    zombieHorde( int N, std::string name );
