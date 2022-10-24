/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:40:08 by mjafari           #+#    #+#             */
/*   Updated: 2022/10/24 14:53:54 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(/* args */) : Form("Shrubbery Creation Form", 145, 137)
{
	this->_target = "";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
{
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this != &src)
	{
		this->_target = src.getTarget();
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << this->getName() << " is destroyed!\n";
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

int ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (this->getIsSigned() == false)
		{
			throw Form::NotSignedForm();
		}
		else if (executor.getGrade() <= this->getExeGradeReq())
		{
			std::string fileName = this->_target + "_shrubbery";
			std::ofstream file;
			file.open(fileName);
			if (file.is_open())
			{
				file << std::endl;
				file << "      .              .              ;%     ;; " << std::endl;
				file << "        ,           ,                :;%  %; " << std::endl;
				file << "         :         ;                   :;%;'     ., " << std::endl;
				file << ",.        %;     %;            ;        %;'    ,; " << std::endl;
				file << "  ;       ;%;  %%;        ,     %;    ;%;    ,%' " << std::endl;
				file << "   %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
				file << "    ;%;      %;        ;%;        % ;%;  ,%;' " << std::endl;
				file << "     `%;.     ;%;     %;'         `;%%;.%;' " << std::endl;
				file << "      `:;%.    ;%%. %@;        %; ;@%;%' " << std::endl;
				file << "         `:%;.  :;bd%;          %;@%;' " << std::endl;
				file << "           `@%:.  :;%.         ;@@%;' " << std::endl;
				file << "             `@%.  `;@%.      ;@@%; " << std::endl;
				file << "               `@%%. `@%%    ;@@%; " << std::endl;
				file << "                 ;@%. :@%%  %@@%; " << std::endl;
				file << "                   %@bd%%%bd%%:; " << std::endl;
				file << "                     #@%%%%%:;; " << std::endl;
				file << "                     %@@%%%::; " << std::endl;
				file << "                     %@@@%(o);  . ' " << std::endl;
				file << "                     %@@@o%;:(.,' " << std::endl;
				file << "                 `.. %@@@o%::; " << std::endl;
				file << "                    `)@@@o%::; " << std::endl;
				file << "                     %@@(o)::; " << std::endl;
				file << "                    .%@@@@%::; " << std::endl;
				file << "                    ;%@@@@%::;. " << std::endl;
				file << "                   ;%@@@@%%:;;;. " << std::endl;
				file << "               ...;%@@@@@%%:;;;;,.. Evangelos ";
			}
			file.close();
			return (1);
		}
	}
	catch (const Form::NotSignedForm &e)
	{
		std::cout << "Exception: " << e.what() << '\n';
	}
	return (0);
}
