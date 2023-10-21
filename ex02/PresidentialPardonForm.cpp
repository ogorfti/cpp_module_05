/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:47:06 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/21 13:25:26 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : AForm(_target, 25, 5)
{
	std::cout << "PresidentialPardonForm Parameterize constructor called" << std::endl;
	this->target = _target;
}


PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm &other)
{
	if (this != &other)
		this->target = other.target;
	std::cout << "PresidentialPardonForm Copy assignment operator called" << std::endl;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other)
{
	*this = other;
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{

	if (this->getSigne() == true && executor.getGrade() < getGardeExecute())
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << '\n';
	else
		throw GradeTooLowException();
}
