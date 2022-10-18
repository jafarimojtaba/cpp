/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCAT.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:43:35 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/18 18:52:39 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#if !defined WrongCAT_HPP
#define WrongCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private: 
	std::string _type;

public:
	WrongCat(/* args */);
	WrongCat(WrongCat const &src);
	WrongCat &operator=(WrongCat const &src);
	~WrongCat();
	void makeSound(void) const;
	std::string getType(void) const;
	void setType(std::string type);
};
#endif