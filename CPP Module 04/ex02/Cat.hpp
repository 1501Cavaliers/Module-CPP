/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:46:42 by flavian           #+#    #+#             */
/*   Updated: 2024/04/13 17:11:00 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
private:
	Brain*	_brain;
public:
	Cat(void);
	Cat(std::string type);
	Cat(const Cat& tmp);
	~Cat(void);

	virtual void	makeSound(void) const;
};

#endif