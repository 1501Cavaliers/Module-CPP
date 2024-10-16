/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platon <platon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 20:11:46 by platon            #+#    #+#             */
/*   Updated: 2024/10/14 18:20:27 by platon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Unnamed"), _is_signed(false), _sign(150), _exec(150), _target("target")
{}

AForm::AForm(std::string name, const int grade, const int exec, std::string target) : _name(name), _is_signed(false), _sign(grade), _exec(exec), _target(target)
{}

AForm::AForm(AForm &tmp) : _name(tmp._name), _is_signed(false), _sign(tmp._sign), _exec(tmp._exec), _target(tmp._target)
{}

AForm::~AForm()
{}

void	AForm::checkGrade(int grade)
{
	if (grade < 1)
		throw GradeTooLowException();
	else if (grade > 150)
		throw GradeTooHighException();
}


const std::string AForm::getName() const
{
	return (_name);
}

const int AForm::getGrade() const
{
	return (_sign);
}

std::string AForm::getTarget() const
{
	return(_target);
}

void	AForm::beSigned(Bureaucrat &s1)
{
	if (s1.getGrade() > this->_exec)
		throw AForm::GradeTooLowException();
	this->_is_signed = true;
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (!this->_is_signed || executor.getGrade() > this->_exec)
		throw AForm::CannotExecuteFormExeption() ;
	action();
}

AForm &AForm::operator=(AForm &rhs)
{
	this->_is_signed = rhs._is_signed;
	this->_target = rhs._target;
	return (*this);
}

std::ostream &operator<<(std::ostream &output, AForm &tmp)
{
	if (output)
		output << tmp.getName() << ", form needs a grade of " << tmp.getGrade() << " to be executed";
	return (output);
}