/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:35:36 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/21 16:39:52 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main()
{
	try
	{
		Bureaucrat ex("Ossssama", 15);

		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf->beSigned(ex);
		ex.executeForm(*rrf);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
