/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:47:06 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/21 13:12:33 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : AForm(_target, 145, 137)
{
	std::cout << "ShrubberyCreationForm Parameterize constructor called" << std::endl;
	this->target = _target;
}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm &other)
{
	if (this != &other)
		this->target = other.target;
	std::cout << "ShrubberyCreationForm Copy assignment operator called" << std::endl;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other)
{
	*this = other;
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{

	if (this->getSigne() == true && executor.getGrade() < getGardeExecute())
	{
		std::ofstream tree(this->target + "_shrubbery");
		if (tree.is_open())
		{
			tree << "    ^    \n";
			tree << "   /|\\   \n";
			tree << "  / | \\  \n";
			tree << " /  |  \\ \n";
			tree << " -------\n";
			tree.close();
		}
	}
	else
		throw GradeTooLowException();
}
