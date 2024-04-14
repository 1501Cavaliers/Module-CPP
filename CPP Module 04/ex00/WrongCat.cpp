/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:46:32 by flavian           #+#    #+#             */
/*   Updated: 2024/04/13 16:10:24 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	
	std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "Not a Cat";
}

WrongCat::WrongCat(std::string type)
{
	std::cout << "WrongCat naming constructor called" << std::endl;
	this->_type = type;
}

WrongCat::WrongCat(const WrongCat& tmp)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->_type = tmp._type;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat deconstructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Téma la taille du flow" << std::endl;
}