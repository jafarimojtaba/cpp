/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:14:26 by mjafari           #+#    #+#             */
/*   Updated: 2022/11/02 18:03:19 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int arr[] = {16, 2, 77, 29};
	std::vector<int> v(arr, arr + sizeof(arr) / sizeof(int)); 
	easyfind(v, 20);
	// v.clear();
	return(0);
}