#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	const std::string _name;
	const	int	_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	std::string getName() const;
	std::string getGrade() const;
};

# endif