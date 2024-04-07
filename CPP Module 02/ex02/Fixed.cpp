/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:04:35 by flavian           #+#    #+#             */
/*   Updated: 2024/04/07 17:56:08 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &nbr)
{
	*this = nbr;
}

Fixed::Fixed(const int nbr)
{
	this->_value = nbr << this->_dot;
}

Fixed::Fixed(const float nbr)
{
	this->_value = roundf(nbr * (1 << this->_dot));
}

int	Fixed::getRawBits(void)const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
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

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	this->_value = rhs.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream &output, const Fixed &rhs)
{
	output << rhs.toFloat();
	return output;
}

bool	Fixed::operator>(const Fixed &nbr)const
{
	return (this->_value > nbr.getRawBits());
}

bool	Fixed::operator<(const Fixed &nbr)const
{
	return (this->_value < nbr.getRawBits());
}

bool	Fixed::operator>=(const Fixed &nbr)const
{
	return (this->_value >= nbr.getRawBits());
}

bool	Fixed::operator<=(const Fixed &nbr)const
{
	return (this->_value <= nbr.getRawBits());
}

bool	Fixed::operator==(const Fixed &nbr)const
{
	return (this->_value == nbr.getRawBits());
}

bool	Fixed::operator!=(const Fixed &nbr)const
{
	return (this->_value != nbr.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &nbr)
{
	Fixed	tmp;

	tmp.setRawBits(this->_value + nbr.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed &nbr)
{
	Fixed	tmp;

	tmp.setRawBits(this->_value - nbr.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &nbr)
{
	Fixed	tmp;

	tmp.setRawBits((int)(float)this->_value * (float)nbr._value / (1 << this->_dot));
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed &nbr)
{
	Fixed	tmp;

	tmp.setRawBits((int)(float)this->_value / (float)nbr._value * (1 << this->_dot));
	return (tmp);
}

Fixed	Fixed::operator++(void)
{
	this->_value++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	++*this;
	return tmp;
}

Fixed	Fixed::operator--(void)
{
	this->_value--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	--*this;
	return tmp;
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

const	Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const	Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}