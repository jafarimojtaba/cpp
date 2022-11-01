/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:53:25 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/28 18:42:25 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <cmath>

class Data
{
private:
	std::string _name;
	int _age;

public:
	Data();
	~Data();
	Data(const Data &src);
	Data& operator=(const Data &src);
	
	std::string getName(void) const;
	void setName(std::string name);
	
	int getAge(void) const;
	void setAge(int age);
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif