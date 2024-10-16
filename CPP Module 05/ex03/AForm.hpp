/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platon <platon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 20:11:42 by platon            #+#    #+#             */
/*   Updated: 2024/10/14 18:17:14 by platon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <ostream>
#include <fstream>

#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
protected:

	const std::string _name;
	bool	_is_signed;
	const int _sign;
	const int _exec;
	std::string _target;

public:

	AForm();
	AForm(std::string name, const int grade, const int exec, std::string target);
	AForm(AForm &tmp);
	~AForm();

	const std::string getName() const;
	const int getGrade() const;
	std::string	getTarget() const;

	void	checkGrade(int grade);
	void	beSigned(Bureaucrat &s1);

	void	execute(Bureaucrat const & executor) const;
	virtual void	action() const = 0;

	class GradeTooLowException : public std::exception {};
	class GradeTooHighException : public std::exception {};
	class CannotExecuteFormExeption : public std::exception {};

	AForm	&operator=(AForm &rhs);
};

std::ostream &operator<<(std::ostream &output, AForm &tmp);

#endif
