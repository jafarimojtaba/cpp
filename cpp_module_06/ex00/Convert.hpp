/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:53:25 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/28 13:12:06 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <cmath>

void convert(std::string input);
int hasCharacter(std::string input);
bool isSpecial(std::string input);

enum return_values
{
	e_is_single_char,
	e_not_valid,
	e_no_char,
};

#endif