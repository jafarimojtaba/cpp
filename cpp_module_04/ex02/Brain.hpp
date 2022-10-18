/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:14:24 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/18 20:54:11 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>

class Brain
{
private: 
	std::string _ideas[100];
	std::string _type;

public:
	Brain(/* args */);
	Brain(std::string type);
	Brain(Brain const &src);
	Brain &operator=(Brain const &src);
	std::string getType(void) const;
	void setType(std::string type);
	~Brain();
};
#endif