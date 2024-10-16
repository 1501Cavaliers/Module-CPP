/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platon <platon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 20:11:50 by platon            #+#    #+#             */
/*   Updated: 2024/10/14 18:14:52 by platon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <string>
#include <ostream>

#include "Form.hpp"
class Form;

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

	const std::string getName() const;
	int getGrade() const;

	void	signForm(Form &form);

	void	checkGrade(int grade);
	void	downgrade();
	void	upgrade();

	class GradeTooLowException : public std::exception {};
	class GradeTooHighException : public std::exception {};

	Bureaucrat	&operator=(Bureaucrat &rhs);
};

std::ostream &operator<<(std::ostream &output, Bureaucrat &tmp);

#endif