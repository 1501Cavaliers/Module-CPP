/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:41:34 by flavian           #+#    #+#             */
/*   Updated: 2024/04/13 14:59:49 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
	this->_type = "Living entity";
}

Animal::Animal(std::string type)
{
	std::cout << "Animal naming constructor called" << std::endl;
	this->_type = type;
}

Animal::Animal(const Animal& tmp)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->_type = tmp._type;
}

Animal::~Animal(void)
{
	std::cout << "Animal deconstructor called" << std::endl;
}

void	Animal::setType(std::string newType)
{
	this->_type = newType;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Mrclughluhlua !!" << std::endl;
}