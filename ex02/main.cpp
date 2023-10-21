/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:35:36 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/21 13:25:12 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"



int main()
{
	try
	{
		Bureaucrat ex("Ossssama", 1);
		// ShrubberyCreationForm tree("test");
		
		PresidentialPardonForm tree("Xman");

		// tree.beSigned(ex);
		tree.beSigned(ex);
		// tree.execute(ex);
		ex.executeForm(tree);
		// ex.increment();
		// std::cout << ex << '\n';
		// AForm form("contrat italy", 5, 1);

		// ex.signForm(form);
		// std::cout << form;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
