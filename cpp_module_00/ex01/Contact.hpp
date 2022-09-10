/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:06:52 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/10 12:26:10 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	Contact(void);
	Contact(std::string firstName,
			std::string lastName,
			std::string nickName,
			std::string phoneNumber,
			std::string darkestSecret);
	~Contact(void);
	void setFirstName(std::string str);
	std::string getFirstName(void);
	void setLastName(std::string str);
	std::string getLastName(void);
	void setNickName(std::string str);
	std::string getNickName(void);
	void setPhoneNumber(std::string str);
	std::string getPhoneNumber(void);
	void setDarkestSecret(std::string str);
	std::string getDarkestSecret(void);
};

#endif