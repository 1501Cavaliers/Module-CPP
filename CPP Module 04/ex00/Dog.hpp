/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:50:04 by flavian           #+#    #+#             */
/*   Updated: 2024/04/13 15:04:29 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
{
public:
	Dog(void);
	Dog(std::string type);
	Dog(const Dog& tmp);
	~Dog(void);

	virtual void	makeSound() const;
};

#endif