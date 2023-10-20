/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 08:56:20 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/20 10:42:50 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp"
class Form;

class Bureaucrat
{
	private:
		std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string newName, int newGrade);
		Bureaucrat& operator=(Bureaucrat &other);
		~Bureaucrat();

		Bureaucrat(Bureaucrat &other);
		Bureaucrat& increment();
		Bureaucrat& decrement();
		std::string getName();
		int getGrade();
		void signForm(Form &form);

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

std::ostream& operator<<(std::ostream& os, Bureaucrat& x);