/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:50:30 by flavian           #+#    #+#             */
/*   Updated: 2024/04/13 16:10:36 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(std::string type)
{
	std::cout << "Dog naming constructor called" << std::endl;
	this->_type = type;
}

Dog::Dog(const Dog& tmp)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = tmp._type;
}

Dog::~Dog(void)
{
	std::cout << "Dog deconstructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "BARK BARK BARK !!" << std::endl;
}