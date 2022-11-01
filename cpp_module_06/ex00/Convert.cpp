/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:53:18 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/28 13:14:54 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

bool isSpecial(std::string input)
{
	return (input == "-inff" || input == "+inff" || input == "nanf" || input == "-inf" || input == "+inf" || input == "nan");
}

int hasCharacter(std::string input)
{
	int len = input.length();

	if(isSpecial(input))
		return (e_no_char);
	if (len == 1 && !isdigit(input[0]) && isprint(input[0]))
	{
		return (e_is_single_char);
	}
	for (size_t i = 0; i < len; i++)
	{
		if (i == 0 && (input[i] == '+' || input[i] == '-'))
			continue;
		if (!isdigit(input[i]) && i != (len - 1) && input[i] != '.')
			return (e_not_valid);
		if (!isdigit(input[i]) && i == (len - 1) && input[i] != 'f' && input[i] != 'F')
			return (e_not_valid);
	}
	return (e_no_char);
}
void convert(std::string input)
{
	double nbr;
	char ch;
	try
	{
		switch (hasCharacter(input))
		{
		case e_is_single_char:
			nbr = static_cast<double>(input[0]);
			break;
		case e_not_valid:
			throw std::exception();
			break;
		default:
			nbr = std::stod(input);
			break;
		}
		if (isSpecial(input) || nbr > std::numeric_limits<char>::max() || nbr < std::numeric_limits<char>::min())
			std::cout
				<< "char: impossible" << std::endl;
		else if (nbr < 32 || nbr >= 127)
			std::cout
				<< "char: Non displayable" << std::endl;
		else
			std::cout << "char : '" << static_cast<char>(nbr) << "'" << std::endl;
		if (isSpecial(input) || nbr > std::numeric_limits<int>::max() || nbr < std::numeric_limits<int>::min())
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(nbr) << std::endl;
		std::cout << "float: " << static_cast<float>(nbr) << (static_cast<bool>(std::fmod(nbr, 1)) ? "f" : ".0f") << std::endl;
		std::cout << "double: " << static_cast<double>(nbr) << (static_cast<bool>(std::fmod(nbr, 1)) ? "" : ".0") << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: Not a valid argument" << '\n';
	}
}
