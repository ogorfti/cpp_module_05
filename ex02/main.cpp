/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:35:36 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/21 13:16:38 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
	try
	{
		Bureaucrat ex("Ossssama", 150);
		ShrubberyCreationForm tree("test");

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
