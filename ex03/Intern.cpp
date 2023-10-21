/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:48:33 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/21 16:41:13 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*-------------------- Orthodox --------------------*/

Intern::Intern() {}

Intern& Intern::operator=(Intern &other)
{
	(void)other;
	return (*this);
}

Intern::Intern(Intern &other)
{
	*this = other;
}

Intern::~Intern() {}

/*-------------------- Member functions --------------------*/

AForm* makeShrubbery(std::string _target)
{
	return (new ShrubberyCreationForm(_target));
}

AForm* makeRobotomy(std::string _target)
{
	return (new RobotomyRequestForm(_target));
}

AForm* makePresidential(std::string _target)
{
	return (new PresidentialPardonForm(_target));
}

AForm* Intern::makeForm(std::string _name, std::string _target)
{
	std::string arr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	AForm* (*funcPtr[])(std::string) = {makeShrubbery, makeRobotomy, makePresidential};
	
	int i = 0;
	while (i < 3 && arr[i] != _name)
		i++;
	if (i < 3)
	{
		std::cout << "Intern creates " << _name << '\n';
		return funcPtr[i](_target);
	}
	else
		throw std::invalid_argument("Error: " + _name);
	return 0;
}
