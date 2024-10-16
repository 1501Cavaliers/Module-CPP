#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unnamde"), _grade(150)
{}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	checkGrade(_grade);
}

Bureaucrat::Bureaucrat(Bureaucrat &tmp) : _name(tmp._name), _grade(tmp._grade)
{
	checkGrade(_grade);
}

Bureaucrat::~Bureaucrat()
{}

void	Bureaucrat::checkGrade(int grade)
{
	if (grade < 1)
		throw GradeTooLowException();
	else if (grade > 150)
		throw GradeTooHighException();
}

void	Bureaucrat::downgrade()
{
	checkGrade(_grade + 1);
	_grade++;
}

void	Bureaucrat::upgrade()
{
	checkGrade(_grade - 1);
	_grade--;
}

const std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &output, Bureaucrat &tmp)
{
	if (output)
		output << tmp.getName() << ", bureaucrate grade " << tmp.getGrade();
	return (output);
}