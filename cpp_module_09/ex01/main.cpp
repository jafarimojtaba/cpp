/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 06:19:21 by mjafari           #+#    #+#             */
/*   Updated: 2023/09/04 06:20:06 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char *argv[])
{

	if ( argc != 2)
	{
		std::cerr <<  ARG_MISSING << std::endl;
		return EXIT_FAILURE;
	}

	RPN	rpn(argv[1]);

	return 0;
}