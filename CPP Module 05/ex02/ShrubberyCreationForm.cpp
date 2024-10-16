/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platon <platon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:39:07 by platon            #+#    #+#             */
/*   Updated: 2024/10/16 16:13:52 by platon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 25, 5, "target")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 25, 5, target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &tmp) : AForm(tmp)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void	ShrubberyCreationForm::action() const
{
	try
	{
		std::string    shrubber =
"\n\
  .oOOo.  \n\
 .o00oOo. \n\
..oOOOoo.. \n\
.oOooOOooOo..\n\
.oOoOOOOoo. \n\
.oooOoOo.  \n\
 .O/||\\O. \n\
    ||     \n\
";
		std::string file(this->getTarget() + "_shrubbery");
		std::ofstream os (file.c_str(), std::ios_base::app);

		if (!os.is_open())
			throw ShrubberyCreationForm::GardeningException();
		os << shrubber;
	}
	catch (std::exception &e)
	{
		std::cout << "The garden {FILE} cannot be opened. The gardener is out of job now." << std::endl;
	}
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &rhs)
{
	this->AForm::operator=(rhs);
	return (*this);
}