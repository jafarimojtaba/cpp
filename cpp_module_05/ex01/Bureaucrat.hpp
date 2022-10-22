/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:50:17 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/22 19:51:39 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

#define splitor std::cout << "\n=============================================================\n"

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;

public:
	Bureaucrat(/* args */);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &src);
	Bureaucrat& operator=(const Bureaucrat &src);
	~Bureaucrat();

	std::string getName(void) const;

	int getGrade(void) const;
	// void setGrade(int);

	void increaseGrade(void);
	void decreaseGrade(void);

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	void signForm(class Form &f);
	
	enum grade_level
	{
		Too_High_Grade,
		Too_Low_Grade,
		OK_Grade
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &bureaucrat);

#endif