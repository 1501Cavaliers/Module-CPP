/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:41:44 by flavian           #+#    #+#             */
/*   Updated: 2024/04/14 13:55:23 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class	Animal
{
protected:
	std::string	_type;
	// Brain*	_brain;
public:
	Animal(void);
	Animal(std::string type);
	Animal(const Animal& tmp);
	virtual ~Animal(void);

	void	setType(std::string newType);
	std::string	getType(void) const;
	virtual void	makeSound(void) const;
};

#endif
