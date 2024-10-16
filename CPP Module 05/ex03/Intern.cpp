#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(Intern &tmp)
{
	*this = tmp;
}

Intern::~Intern()
{}

AForm	*Intern::makeForm(std::string form, std::string target)
{
	std::string	tab[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	int i = 0;
	while (tab[i] != form)
		i++;
	switch (i)
	{
		case 0 :
			std::cout << "Intern created robotomy request form !\n";
			return (new RobotomyRequestForm(target));
		case 1 :
			std::cout << "Intern created presidential pardon form !\n";
			return (new PresidentialPardonForm(target));
		case 2 :
			std::cout << "Intern created shrubbery request form !\n";
			return (new ShrubberyCreationForm(target));
		default :
			std::cout << "Intern failed to create form, frie him and hire a new one !\n";
	}
	return (NULL);
}

Intern &Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}