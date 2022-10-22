/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:50:21 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/22 18:23:57 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */) : _name("void"), _grade(150)
{
	std::cout << "void Bureaucrat with minimum grade of " << this->_grade << " was created!\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat " << name << " with grade " << grade << " tries to be created!\n";
	try
	{
		if (grade > 150)
		{
			this->_grade = 150;
			throw Bureaucrat::GradeTooLowException();
		}
		else if (grade < 1)
		{
			this->_grade = 150;
			throw Bureaucrat::GradeTooHighException();
		}
		else
		{
			this->_grade = grade;
		}
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Exception: " << e.what() << '\n';
		std::cout << "Exception: grade was set to " << this->_grade << "\n";
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Exception: " << e.what() << '\n';
		std::cout << "Exception: grade was set to " << this->_grade << "\n";
	}
}
const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is Too low");
}
const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is Too high");
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _grade(src.getGrade()), _name(src.getName())
{
	std::cout << "Bureaucrat: creating copy from " << src.getName() << "\n";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	std::cout << "Bureaucrat: copy assignment operator\n";
	if (this != &src)
	{
		this->_grade = src.getGrade();
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << this->_name << " was fired!\n";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return os;
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::increaseGrade(void)
{
	try
	{
		if ((this->_grade - 1) < 1)
			throw Bureaucrat::GradeTooHighException();
		else
		{
			this->_grade -= 1;
			std::cout << "Grade of " << this->_name << " increased to " << this->_grade << " \n";
		}
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Exception: " << e.what() << '\n';
	}
}

void Bureaucrat::decreaseGrade(void)
{
	try
	{
		if ((this->_grade + 1) > 150)
			throw Bureaucrat::GradeTooLowException();
		else
		{
			this->_grade += 1;
			std::cout << "Grade of " << this->_name << " decreased to " << this->_grade << " \n";
		}
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Exception: " << e.what() << '\n';
	}
}
