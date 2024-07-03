/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:46:42 by flavian           #+#    #+#             */
/*   Updated: 2024/06/13 11:30:48 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
public:
	Cat(void);
	Cat(std::string type);
	Cat(const Cat& tmp);
	~Cat(void);
	Cat	&operator=(const Cat &rhs);


	virtual void	makeSound(void) const;
};

#endif