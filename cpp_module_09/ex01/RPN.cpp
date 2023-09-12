/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 06:19:37 by mjafari           #+#    #+#             */
/*   Updated: 2023/09/04 08:14:33 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string arg): _tokens(arg)
{

	double result = rpn_calculation(_tokens);
    std::cout << result << std::endl;
};


// A helper function to check if a string is an operator
bool isOperator(const std::string& s) {
    return s == "+" || s == "-" || s == "*" || s == "/";
}

// A helper function to perform an arithmetic operation on two operands
double performOperation(double a, double b, const std::string& op) {
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    if (op == "/") return a / b;
    return 0; // should never reach here
}

// A function to evaluate an inverted Polish expression
double RPN::rpn_calculation(std::string expr)
{
    std::stack<double> operands; // a stack to store the operands
    std::istringstream iss(expr); // a string stream to read the expression
    std::string token; // a string to store each token of the expression
    while (iss >> token) { // loop through each token
        if (isOperator(token)) { // if the token is an operator
            if (operands.size() < 2) { // check if there are enough operands on the stack
                std::cerr << "Invalid expression: not enough operands" << std::endl;
                exit(1);
            }
            double b = operands.top(); // pop the top operand as the second operand
            operands.pop();
            double a = operands.top(); // pop the next operand as the first operand
            operands.pop();
            double c = performOperation(a, b, token); // perform the operation and get the result
            operands.push(c); // push the result back to the stack
        } else { // otherwise, assume the token is an operand
            double d = atof(token.c_str()); // convert the token to a double value
            operands.push(d); // push the value to the stack
        }
    }
    if (operands.size() != 1) { // check if there is exactly one operand left on the stack
        std::cerr << "Invalid expression: too many operands" << std::endl;
        exit(1);
    }
    return operands.top(); // return the final result
};

RPN::~RPN(){};


RPN::RPN(RPN const &cpy)
{
	*this = cpy;
};

RPN &RPN::operator=(RPN const &rhs)
{
	if (this == &rhs)
		std::cout << "it is itself" << std::endl;
	return *this;
};