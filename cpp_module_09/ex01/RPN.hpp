/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 06:19:43 by mjafari           #+#    #+#             */
/*   Updated: 2023/09/04 09:53:09 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP


#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <stdlib.h>
#include <cstdlib>


#define ARG_MISSING "Error : Polish mathematical expression as argument is missing"
#define OPERANDS_MISSING  "Error: Not enough operands for operator"
#define DIV_ZERO_ERR "Error: Division by zero"
#define BAD_INPUT "Error: Bad input"
#define BAD_RESULT "Error: Bad result"

class RPN
{
	private:
	
	std::string	_tokens;
	RPN(){};
	
	public:
	
	RPN(std::string tokens);
	RPN(RPN const &cpy);
	RPN &operator=(RPN const &rhs);
	~RPN();

	double rpn_calculation(std::string tokens);
	
};


#endif