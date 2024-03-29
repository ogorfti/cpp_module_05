/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 08:59:40 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/20 10:45:19 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*-------------------- Orthodox --------------------*/

Bureaucrat::Bureaucrat()
{
	this->name = "default";
	this->grade = 1;
	std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string newName, int newGrade) : name(newName), grade(newGrade)
{
	if (newGrade > 150)
		throw GradeTooLowException();
	if (newGrade < 1)
		throw GradeTooHighException();
	std::cout << "Parameterize constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat &other)
{
	if (this != &other)
	{
		this->grade = other.grade;
		this->name = other.name;
	}
	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
	return (*this);
}

Bureaucrat::Bureaucrat(Bureaucrat &other)
{
	*this = other;
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

/*-------------------- Member functions --------------------*/

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

std::string Bureaucrat::getName()
{
	return (this->name);
}

int	Bureaucrat::getGrade()
{
	return (this->grade);
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& x)
{
	os << x.getName() <<", bureaucrat grade " << x.getGrade();
	return (os);
}

Bureaucrat& Bureaucrat::increment()
{
	this->grade -= 1;
	if (this->grade > 150)
		throw GradeTooLowException();
	if (this->grade < 1)
		throw GradeTooHighException();
	return (*this);
}

Bureaucrat& Bureaucrat::decrement()
{
	this->grade += 1;
	if (this->grade > 150)
		throw GradeTooLowException();
	if (this->grade < 1)
		throw GradeTooHighException();
	return (*this);
}
