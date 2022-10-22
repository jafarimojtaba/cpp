/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:49:42 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/22 18:17:14 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	splitor;
	Bureaucrat b1("Mojtaba", 10);
	splitor;
	b1.decreaseGrade();
	splitor;
	Bureaucrat b2 = b1;
	splitor;
	// b2 = b1;
	splitor;
	std::cout << b1 << b2;
	splitor;
	return 0;
}