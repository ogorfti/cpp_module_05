/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:35:36 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/20 10:49:45 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
	try
	{
		Bureaucrat ex("Ossssama", 4);
		ex.increment();
		std::cout << ex << '\n';
		Form form("contrat italy", 5, 1);

		ex.signForm(form);
		std::cout << form;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
