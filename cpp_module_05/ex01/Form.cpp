/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:50:50 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/22 20:05:18 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is Too low for the form");
}
const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is Too high for the form");
}

Form::Form(/* args */) : _name(""), _is_signed(false), _sign_grade_req(1), _exe_grade_req(1)
{
	std::cout << "Empty Form was created!\n";
}

Form::Form(std::string name, int sign_g, int exe_g) : _name(name), _is_signed(false), _sign_grade_req(sign_g), _exe_grade_req(exe_g)
{
	try
	{
		if (this->getSignGradeReq() > 150 || this->getExeGradeReq() > 150)
			throw Form::GradeTooLowException();
		if (this->getSignGradeReq() < 1 || this->getExeGradeReq() < 1)
			throw Form::GradeTooHighException();
		else
			std::cout << "Form " << name << " is created successfully\n";
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << "Form Exception: Form created but with out of range grades=> " << e.what() << '\n';
		// std::cout << "so it will be destroyed!\n";
		// delete this;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << "Form Exception: Form created but with out of range grades=> " << e.what() << '\n';
		// std::cout << "so it will be destroyed!\n";
		// delete this;
	}
}

Form::Form(const Form &src) : _name(src.getName()), _is_signed(false), _sign_grade_req(src.getSignGradeReq()), _exe_grade_req(src.getExeGradeReq())
{
	std::cout << "Form: creating copy from " << src.getName() << "\n";
	try
	{
		if (this->getSignGradeReq() > 150 || this->getExeGradeReq() > 150)
			throw Form::GradeTooLowException();
		else if (this->getSignGradeReq() < 1 || this->getExeGradeReq() < 1)
			throw Form::GradeTooHighException();
		else
			std::cout << "Form " << src.getName() << " is copied successfully\n";
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << "Form Exception: Form copied but with out of range grades=> " << e.what() << '\n';
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << "Form Exception: Form copied but with out of range grades=> " << e.what() << '\n';
	}
}

Form &Form::operator=(const Form &src)
{
	std::cout << "Form: copy assignment operator\n";
	if (this != &src)
	{
		this->_is_signed = src.getIsSigned();
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Form " << this->_name << " was destroyed!\n";
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	if (form.getIsSigned())
		os << form.getName() << "with sign grade of " << form.getSignGradeReq() << " and execution grade of " << form.getExeGradeReq() << " is signed!" << std::endl;
	else
		os << form.getName() << "with sign grade of " << form.getSignGradeReq() << " and execution grade of " << form.getExeGradeReq() << " is not yet signed!" << std::endl;
	return os;
}

std::string Form::getName(void) const
{
	return (this->_name);
}

bool Form::getIsSigned(void) const
{
	return (this->_is_signed);
}

int Form::getSignGradeReq(void) const
{
	return (this->_sign_grade_req);
}

int Form::getExeGradeReq(void) const
{
	return (this->_exe_grade_req);
}

int Form::beSigned(Bureaucrat &b)
{
	int bg = b.getGrade();
	int fg = this->_sign_grade_req;

	try
	{
		if (bg <= fg)
			return Bureaucrat::OK_Grade;
		else
		{
			throw Form::GradeTooLowException();
			return Bureaucrat::Too_Low_Grade;
		}
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception to sign the form with your grade: " << e.what() << '\n';
	}
	return Bureaucrat::Too_Low_Grade;
};
