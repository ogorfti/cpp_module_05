/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:47:06 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/21 13:50:49 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : AForm(_target, 72, 45)
{
	std::cout << "RobotomyRequestForm Parameterize constructor called" << std::endl;
	this->target = _target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm &other)
{
	if (this != &other)
		this->target = other.target;
	std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other)
{
	*this = other;
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{

	if (this->getSigne() == true && executor.getGrade() < getGardeExecute())
	{
		std::cout << "Drilling noises..." << std::endl;
		std::srand(std::time(0));
		if (rand() % 2 == 0)
			std::cout << this->target << " has been robotomized successfully!" << std::endl;
		else 
			std::cout << "Robotomy failed for " << this->target << std::endl;
	}
	else
		throw GradeTooLowException();
}
