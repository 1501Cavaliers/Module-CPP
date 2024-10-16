/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platon <platon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 20:11:46 by platon            #+#    #+#             */
/*   Updated: 2024/10/14 18:20:27 by platon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
// #include "Bureaucrat.hpp"

Form::Form() : _name("Unnamde"), is_signed(false), _grade(150), to_exec(150)
{}

Form::Form(std::string name, const int grade, const int exec) : _name(name), is_signed(false), _grade(grade), to_exec(exec)
{}

Form::Form(Form &tmp) : _name(tmp._name), is_signed(false), _grade(tmp._grade), to_exec(tmp.to_exec)
{}

Form::~Form()
{}

void	Form::checkGrade(int grade)
{
	if (grade < 1)
		throw GradeTooLowException();
	else if (grade > 150)
		throw GradeTooHighException();
}


const std::string Form::getName() const
{
	return (_name);
}

const int Form::getGrade() const
{
	return (_grade);
}

void	Form::beSigned(Bureaucrat &s1)
{
	if (s1.getGrade() > this->to_exec)
		throw Form::GradeTooLowException();
	this->is_signed = true;
}

Form &Form::operator=(Form &rhs)
{
	this->is_signed = rhs.is_signed;
	return (*this);
}

std::ostream &operator<<(std::ostream &output, Form &tmp)
{
	if (output)
		output << tmp.getName() << ", form needs a grade of " << tmp.getGrade() << " to be executed";
	return (output);
}