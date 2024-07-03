/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:41:44 by flavian           #+#    #+#             */
/*   Updated: 2024/06/13 11:36:03 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class	Animal
{
protected:
	std::string	_type;

public:
	Animal(void);
	Animal(std::string type);
	Animal(const Animal& tmp);
	~Animal(void);
	Animal	&operator=(const Animal &rhs);


	void	setType(std::string newType);
	std::string	getType(void) const;
	virtual void	makeSound(void) const;
};

#endif
