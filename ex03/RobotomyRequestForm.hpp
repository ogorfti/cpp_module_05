/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:47:11 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/21 13:28:33 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

class RobotomyRequestForm : public AForm
{
	private:
		std::string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string _target);
		RobotomyRequestForm(RobotomyRequestForm &other);
		RobotomyRequestForm& operator=(RobotomyRequestForm &other);
		~RobotomyRequestForm();
		void execute(Bureaucrat const & executor) const;
};
