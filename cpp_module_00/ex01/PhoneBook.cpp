/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:05:45 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/10 20:05:46 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int is_empty(std::string s)
{
	int	i;

	i = 0;
	
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t'))
		i++;
	if (s[i] == '\0' || s[0] == '\0')
		return (1);
	else
		return (0);
}

PhoneBook::PhoneBook(){
	this->last_contact_id = 0;
}

PhoneBook::~PhoneBook(){
}

void PhoneBook::add(void){
	std::string firstName, lastName, nickName, phoneNumber, darkestSecret = "";

	std::cout << "What is the First Name?" << std::endl;
	while (is_empty(firstName))
		std::getline(std::cin, firstName);
	
	std::cout << "What is the Last Name?" << std::endl;
	while (is_empty(lastName))
		std::getline(std::cin, lastName);
	
	std::cout << "The Nick Name?" << std::endl;
	while (is_empty(nickName))
		std::getline(std::cin, nickName);
	
	std::cout << "The Phone Number?" << std::endl;
	while (is_empty(phoneNumber))
		std::getline(std::cin, phoneNumber);
	
	std::cout << "And the Darkest Secret?" << std::endl;
	while (is_empty(darkestSecret))
		std::getline(std::cin, darkestSecret);
	
	
	if (this->last_contact_id > 7)
	{
		this->contacts[this->last_contact_id % 8].setFirstName(firstName);
		this->contacts[this->last_contact_id % 8].setLastName(lastName);
		this->contacts[this->last_contact_id % 8].setNickName(nickName);
		this->contacts[this->last_contact_id % 8].setPhoneNumber(phoneNumber);
		this->contacts[this->last_contact_id % 8].setDarkestSecret(darkestSecret);
	}
	else
		this->contacts[this->last_contact_id] = Contact(firstName, lastName, nickName,phoneNumber, darkestSecret);
	
	this->last_contact_id += 1;
	std::cout << "The contact has been added!\n";
}

void trunc_print(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 10);
		str.replace(9, 1, ".");
	}
	std::cout << std::setw(10) << str;
}

void PhoneBook::search(void){
	int j = 0;
	std::string input;
	
	if (this->last_contact_id == 0){
		std::cout << "Phone Book is empty!\n";
		return;
	}
	int i = this->last_contact_id;
	if (i > 8)
		i = 8;

	std::cout <<std::setw(10) << "indext" << " | ";
	std::cout <<std::setw(10) << "First Name" << " | ";
	std::cout <<std::setw(10) << "Last Name" << " | ";
	std::cout <<std::setw(10) << "Nick Name\n";
	for (int j = 0; j < i; j++)
	{
		std::cout << std::setw(10);
		std::cout << j + 1 << " | ";
		trunc_print(this->contacts[j].getFirstName());
		std::cout << " | ";
		trunc_print(this->contacts[j].getLastName());
		std::cout << " | ";
		trunc_print(this->contacts[j].getNickName());
		std::cout << std::endl;
	}
	std::cout << "Choose the index number to view full information!" << std::endl;
	while (is_empty(input))
		std::getline(std::cin, input);
	j = atoi(input.c_str());
	if (j > 0 && j <= i)
	{
		std::cout << "\nFirst Name	: " << this->contacts[j - 1].getFirstName() << std::endl;
		std::cout << "Last Name 	: " << this->contacts[j- 1].getLastName() << std::endl;
		std::cout << "Nick Name 	: " << this->contacts[j- 1].getNickName() << std::endl;
		std::cout << "Phone Number	: " << this->contacts[j - 1].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret\t: " << this->contacts[j - 1].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "The index is not correct!\n";
}
