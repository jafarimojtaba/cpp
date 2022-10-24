#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string _name;
	bool _is_signed;
	const int _sign_grade_req;
	const int _exe_grade_req;

public:
	Form(/* args */);
	Form(std::string name, int sign_g, int exe_g);
	Form(const Form &src);
	Form &operator=(const Form &src);
	virtual ~Form();
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
	class NotSignedForm : public std::exception
	{
	public:
		const char *what() const throw();
	};
	std::string getName(void) const;
	bool getIsSigned(void) const;
	int getSignGradeReq(void) const;
	int getExeGradeReq(void) const;
	int beSigned(class Bureaucrat &b);
	virtual int execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, const Form &form);

#endif
