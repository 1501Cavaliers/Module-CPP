/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:46:42 by flavian           #+#    #+#             */
/*   Updated: 2024/04/13 16:22:21 by flavian          ###   ########.fr       */
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

	virtual void	makeSound(void) const;
};

#endif