/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:07:19 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/10 12:07:40 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOk_HPP
# define PHONEBOOk_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int last_contact_id;
public:
	PhoneBook();
	~PhoneBook();
	void add(void);
	void search(void);
};

#endif
