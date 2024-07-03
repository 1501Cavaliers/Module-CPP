/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:50:30 by flavian           #+#    #+#             */
/*   Updated: 2024/04/13 16:13:52 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(void)
{
	std::cout << "WrongDog default constructor called" << std::endl;
	this->_type = "Not a Dog";
}

WrongDog::WrongDog(std::string type)
{
	std::cout << "WrongDog naming constructor called" << std::endl;
	this->_type = type;
}

WrongDog::WrongDog(const WrongDog& tmp)
{
	std::cout << "WrongDog copy constructor called" << std::endl;
	this->_type = tmp._type;
}

WrongDog::~WrongDog(void)
{
	std::cout << "WrongDog deconstructor called" << std::endl;
}

void	WrongDog::makeSound(void) const
{
	std::cout << "piou piou piou" << std::endl;
}

WrongDog	&WrongDog::operator=(const WrongDog &rhs)
{
	std::cout << "WrongDog Copy assignement operator called" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}