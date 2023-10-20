/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:53:55 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/20 10:18:55 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		const std::string name;
		const int gardeSigne;
		const int gardeExecute;
		bool signe;
	public:
		Form();
		Form(const std::string newName, const int newGardeSigne, const int newGardeExecute);
		Form(const Form &other);
		Form& operator=(Form &other);
		~Form();

		std::string getName();
		int getGardeSigne();
		int getGardeExecute();
		bool getSigne();
		void beSigned(Bureaucrat& beru);

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, Form& x);