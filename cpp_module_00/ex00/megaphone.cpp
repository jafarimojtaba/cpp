/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:50:29 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/04 18:37:40 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			int j = 0;
			while (argv[i][j] != '\0')
				putchar(toupper(argv[i][j++]));
			if (i < argc - 1)
				putchar(' ');
		}
	}
	std::cout << std::endl;
	return (0);
}