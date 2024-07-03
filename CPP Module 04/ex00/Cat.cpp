/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:46:32 by flavian           #+#    #+#             */
/*   Updated: 2024/06/13 11:31:07 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(std::string type)
{
	std::cout << "Cat naming constructor called" << std::endl;
	this->_type = type;
}

Cat::Cat(const Cat& tmp)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = tmp._type;
}

Cat::~Cat(void)
{
	std::cout << "Cat deconstructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow meow meow !!" << std::endl;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat Copy assignement operator called" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}