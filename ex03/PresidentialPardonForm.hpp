/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:47:11 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/21 13:20:58 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class PresidentialPardonForm : public AForm
{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string _target);
		PresidentialPardonForm(PresidentialPardonForm &other);
		PresidentialPardonForm& operator=(PresidentialPardonForm &other);
		~PresidentialPardonForm();
		void execute(Bureaucrat const & executor) const;
};
