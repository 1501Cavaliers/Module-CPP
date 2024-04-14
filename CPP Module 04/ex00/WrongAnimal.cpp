/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:41:34 by flavian           #+#    #+#             */
/*   Updated: 2024/04/13 14:59:49 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->_type = "Not an animal";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal naming constructor called" << std::endl;
	this->_type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& tmp)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->_type = tmp._type;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal deconstructor called" << std::endl;
}

void	WrongAnimal::setType(std::string newType)
{
	this->_type = newType;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Fumer provoque 9 cancers du poumon sur 10" << std::endl;
}