/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:46:32 by flavian           #+#    #+#             */
/*   Updated: 2024/04/13 17:15:41 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(std::string type)
{
	std::cout << "Cat naming constructor called" << std::endl;
	this->_type = type;
	this->_brain = new Brain();
}

Cat::Cat(const Cat& tmp)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = tmp._type;
	this->_brain = new Brain(*tmp._brain);
}

Cat::~Cat(void)
{
	std::cout << "Cat deconstructor called" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow meow meow !!" << std::endl;
}