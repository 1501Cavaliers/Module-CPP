/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:50:04 by flavian           #+#    #+#             */
/*   Updated: 2024/04/13 17:11:03 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
private:
	Brain*	_brain;
public:
	Dog(void);
	Dog(std::string type);
	Dog(const Dog& tmp);
	~Dog(void);

	virtual void	makeSound() const;
};

#endif