/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:50:30 by flavian           #+#    #+#             */
/*   Updated: 2024/04/13 17:16:09 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(std::string type)
{
	std::cout << "Dog naming constructor called" << std::endl;
	this->_type = type;
	this->_brain = new Brain();
}

Dog::Dog(const Dog& tmp)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = tmp._type;
	this->_brain = new Brain(*tmp._brain);
}

Dog::~Dog(void)
{
	std::cout << "Dog deconstructor called" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "BARK BARK BARK !!" << std::endl;
}