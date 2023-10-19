/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:35:36 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/19 11:50:50 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat ex("Ossssama", 150);
		++ex;
		std::cout << ex << '\n';
		Bureaucrat test("Ossssama", 151);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
