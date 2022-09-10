/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:05:41 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/10 20:05:52 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}
Contact::~Contact(void) {
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

void Contact::setFirstName(std::string str)
{
	this->firstName = str;
}
std::string Contact::getFirstName(void)
{
	return (this->firstName);
}

void Contact::setLastName(std::string str)
{
	this->lastName = str;
}
std::string Contact::getLastName(void)
{
	return (this->lastName);
}

void Contact::setNickName(std::string str)
{
	this->nickName = str;
}
std::string Contact::getNickName(void)
{
	return (this->nickName);
}

void Contact::setPhoneNumber(std::string str)
{
	this->phoneNumber = str;
}
std::string Contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}

void Contact::setDarkestSecret(std::string str)
{
	this->darkestSecret = str;
}
std::string Contact::getDarkestSecret(void)
{
	return(this->darkestSecret);
}