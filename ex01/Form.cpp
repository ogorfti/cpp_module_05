/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:05:07 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/20 10:46:49 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*-------------------- Orthodox --------------------*/

Form::Form() : gardeSigne(0), gardeExecute(0)
{
	this->signe = false;
	std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(const std::string newName, const int newGardeSigne, const int newGardeExecute) : name(newName), gardeSigne(newGardeSigne), gardeExecute(newGardeExecute)
{
	this->signe = false;
	if (newGardeSigne > 150)
		throw GradeTooLowException();
	if (newGardeSigne < 1)
		throw GradeTooHighException();
	std::cout << "Form Parameterize constructor called" << std::endl;
}

Form& Form::operator=(Form &other)
{
	if (this != &other)
		this->signe = other.signe;
	std::cout << "Form Copy assignment operator called" << std::endl;
	return (*this);
}

Form::Form(const Form &other) : name(other.name), gardeSigne(other.gardeSigne), gardeExecute(other.gardeExecute)
{
	this->signe = other.signe;
	std::cout << "Form Copy constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

/*-------------------- Member functions --------------------*/

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form Grade is too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form Grade is too low!");
}

std::ostream& operator<<(std::ostream& os, Form& x)
{
	os << "Form Name: " << x.getName() << std::endl;
    os << "Grade Required to Sign: " << x.getGardeSigne() << std::endl;
    os << "Grade Required to Execute: " << x.getGardeExecute() << std::endl;
    os << "Is Signed: " << (x.getSigne() ? "Yes" : "No") << std::endl;
	return (os);
}

std::string Form::getName()
{
	return (this->name);
}

int Form::getGardeSigne()
{
	return (this->gardeSigne);
}

int Form::getGardeExecute()
{
	return (this->gardeExecute);
}

bool Form::getSigne()
{
	return (this->signe);
}

void Form::beSigned(Bureaucrat& beru)
{
	if (beru.getGrade() <= this->gardeSigne)
		this->signe = true;
	else
		throw GradeTooLowException();
}
