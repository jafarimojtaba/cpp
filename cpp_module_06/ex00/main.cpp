/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:53:31 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/28 12:54:07 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Please provide only one argumant\n";
		return (0);
	}
	convert(argv[1]);
	return (0);
}