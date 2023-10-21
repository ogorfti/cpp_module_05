/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:53:55 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/21 16:31:55 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
	private:
		const std::string name;
		const int gardeSigne;
		const int gardeExecute;
		bool signe;
	public:
		AForm();
		AForm(const std::string newName, const int newGardeSigne, const int newGardeExecute);
		AForm(const AForm &other);
		AForm& operator=(AForm &other);
		virtual ~AForm();

		std::string getName() const;
		int getGardeSigne() const;
		int getGardeExecute() const;
		bool getSigne() const;
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

		virtual void execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream& os, AForm& x);