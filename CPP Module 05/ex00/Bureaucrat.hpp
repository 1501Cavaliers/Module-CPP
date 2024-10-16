#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:

	const std::string _name;
	int	_grade;

public:

	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat &tmp);
	~Bureaucrat();

	Bureaucrat	&operator=(Bureaucrat &rhs);

	const std::string getName() const;
	int getGrade() const;

	void	checkGrade(int grade);
	void	downgrade();
	void	upgrade();

	class GradeTooLowException : public std::exception {};
	class GradeTooHighException : public std::exception {};

};

std::ostream &operator<<(std::ostream &output, Bureaucrat &tmp);

# endif