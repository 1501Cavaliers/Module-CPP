/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:04:35 by flavian           #+#    #+#             */
/*   Updated: 2024/06/10 19:33:22 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Default deconstructor called" << std::endl;
}

Fixed::Fixed(const Fixed &nbr)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = nbr;
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int based constructor called" << std::endl;
	this->_value = nbr << this->_dot;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float based constructor called" << std::endl;
	this->_value = roundf(nbr * (1 << this->_dot));
}

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this); 42.42
}

int	Fixed::getRawBits(void)const
{
	std::cout << "getRawBits called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits called" << std::endl;
	this->_value = raw;
}

int	Fixed::toInt()const
{
	return (this->_value >> this->_dot);
}

float	Fixed::toFloat()const
{
	return (float)(this->_value) / (1 << this->_dot);
}

std::ostream&	operator<<(std::ostream &output, const Fixed &rhs)
{
	output << rhs.toFloat();
	return output;
}