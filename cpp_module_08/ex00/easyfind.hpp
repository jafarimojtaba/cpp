/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:14:43 by mjafari           #+#    #+#             */
/*   Updated: 2022/11/02 17:46:33 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>


template <typename T>
void easyfind(std::vector<T> a, int b)
{
	try
	{
		T c = std::find(a.begin(), a.end(), b) != a.end();
		if (c)
			std::cout << "we found a occurrence of " << b << std::endl;
		else
			throw std::exception();
	}
	catch (const std::exception &e)
	{
		std::cout << "no occurrence is found" << '\n';
	}
}
#endif