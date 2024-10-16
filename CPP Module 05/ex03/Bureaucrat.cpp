/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platon <platon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 20:11:53 by platon            #+#    #+#             */
/*   Updated: 2024/10/16 16:14:18 by platon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;  
	}
	catch(AForm::GradeTooLowException &e)
	{
		std::cout << this->_name << " couldn't signed " << form.getName()
				<< " because of GRADE TOO LOW."<< std::endl; 
	}
	
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;

	}
	catch(const AForm::CannotExecuteFormExeption & e)
	{
		std::cout << this->_name << " cannot execute " << form.getName() << std::endl;
	}	
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