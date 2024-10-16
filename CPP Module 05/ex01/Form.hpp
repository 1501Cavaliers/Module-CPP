/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platon <platon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 20:11:42 by platon            #+#    #+#             */
/*   Updated: 2024/10/14 18:17:14 by platon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <ostream>

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
private:

	const std::string _name;
	bool	is_signed;
	const int _grade;
	const int to_exec;

public:

	Form();
	Form(std::string name, const int grade, const int exec);
	Form(Form &tmp);
	~Form();

	const std::string getName() const;
	const int getGrade() const;

	void	checkGrade(int grade);
	void	beSigned(Bureaucrat &s1);

	class GradeTooLowException : public std::exception {};
	class GradeTooHighException : public std::exception {};

	Form	&operator=(Form &rhs);
};

std::ostream &operator<<(std::ostream &output, Form &tmp);

#endif
