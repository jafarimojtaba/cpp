/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:19:18 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/16 15:40:45 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int harlFilter(std::string filter)
{
	std::string myarray[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (filter == myarray[i])
			return (i + 1);
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "please check the number of inputs!\n";
		return (1);
	}
	int filter = harlFilter(argv[1]);
	Harl h1;
	switch (filter)
	{
	case edebug:
		h1.complain("DEBUG");
		h1.complain("INFO");
		h1.complain("WARNING");
		h1.complain("ERROR");
		break;
	case einfo:
		h1.complain("INFO");
		h1.complain("WARNING");
		h1.complain("ERROR");
		break;
	case ewarning:
		h1.complain("WARNING");
		h1.complain("ERROR");
		break;
	case eerror:
		h1.complain("ERROR");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]";
		break;
	}
	return (0);
}
