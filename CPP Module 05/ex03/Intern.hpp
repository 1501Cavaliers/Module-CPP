#ifndef INTER_HPP
#define INTER_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:

public:
	Intern();
	Intern(Intern &tmp);
	~Intern();

	AForm	*makeForm(std::string form, std::string target);

	Intern &operator=(Intern const & rhs);
};

#endif