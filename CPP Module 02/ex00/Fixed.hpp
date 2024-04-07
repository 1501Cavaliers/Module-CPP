/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:04:32 by flavian           #+#    #+#             */
/*   Updated: 2024/04/06 14:08:53 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					_value;
	const	int	static	_dot = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &nbr);
	Fixed	&operator=(const Fixed &rhs);
	int	getRawBits(void)const;
	void	setRawBits(int const raw);
};


#endif