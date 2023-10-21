/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:05:07 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/21 11:48:09 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*-------------------- Orthodox --------------------*/

AForm::AForm() : gardeSigne(0), gardeExecute(0)
{
	this->signe = false;
	std::cout << "AForm Default constructor called" << std::endl;
}

AForm::AForm(const std::string newName, const int newGardeSigne, const int newGardeExecute) : name(newName), gardeSigne(newGardeSigne), gardeExecute(newGardeExecute)
{
	this->signe = false;
	if (newGardeSigne > 150)
		throw GradeTooLowException();
	if (newGardeSigne < 1)
		throw GradeTooHighException();
	std::cout << "AForm Parameterize constructor called" << std::endl;
}

AForm& AForm::operator=(AForm &other)
{
	if (this != &other)
		this->signe = other.signe;
	std::cout << "AForm Copy assignment operator called" << std::endl;
	return (*this);
}

AForm::AForm(const AForm &other) : name(other.name), gardeSigne(other.gardeSigne), gardeExecute(other.gardeExecute)
{
	this->signe = other.signe;
	std::cout << "AForm Copy constructor called" << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm Destructor called" << std::endl;
}

/*-------------------- Member functions --------------------*/

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("AForm Grade is too high!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("AForm Grade is too low!");
}

std::ostream& operator<<(std::ostream& os, AForm& x)
{
	os << "AForm Name: " << x.getName() << std::endl;
    os << "Grade Required to Sign: " << x.getGardeSigne() << std::endl;
    os << "Grade Required to Execute: " << x.getGardeExecute() << std::endl;
    os << "Is Signed: " << (x.getSigne() ? "Yes" : "No") << std::endl;
	return (os);
}

std::string AForm::getName() const
{
	return (this->name);
}

int AForm::getGardeSigne() const
{
	return (this->gardeSigne);
}

int AForm::getGardeExecute() const
{
	return (this->gardeExecute);
}

bool AForm::getSigne() const
{
	return (this->signe);
}

void AForm::beSigned(Bureaucrat& beru)
{
	if (beru.getGrade() <= this->gardeSigne)
		this->signe = true;
	else
		throw GradeTooLowException();
}

void AForm::execute(Bureaucrat const & executor) const
{
	(void) executor;
}