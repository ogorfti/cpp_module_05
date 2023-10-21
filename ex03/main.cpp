/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:35:36 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/21 14:37:27 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
	try
	{
		Bureaucrat ex("Ossssama", 15);
		RobotomyRequestForm tree("test");
		tree.beSigned(ex);
		ex.executeForm(tree);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
