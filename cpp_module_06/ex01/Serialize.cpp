/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:53:18 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/28 18:57:03 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"
Data::Data(): _name("Mojtaba"), _age(31){}

void Data::setName(std::string name)
{
	this->_name = name;
}

void Data::setAge(int age)
{
	this->_age = age;
}

int Data::getAge(void) const
{
	return (this->_age);
}

std::string Data::getName(void) const
{
	return (this->_name);
}

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}
Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

