/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platon <platon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 20:11:50 by platon            #+#    #+#             */
/*   Updated: 2024/10/16 16:05:04 by platon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <string>
#include <ostream>

#include "AForm.hpp"
class AForm;

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

	void	signForm(AForm &form);

	void	checkGrade(int grade);
	void	downgrade();
	void	upgrade();
	
	void	executeForm(AForm const & form);

	class GradeTooLowException : public std::exception {};
	class GradeTooHighException : public std::exception {};

	Bureaucrat	&operator=(Bureaucrat &rhs);
};

std::ostream &operator<<(std::ostream &output, Bureaucrat &tmp);

#endif