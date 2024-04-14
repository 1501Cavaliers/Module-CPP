/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:46:42 by flavian           #+#    #+#             */
/*   Updated: 2024/04/13 16:10:14 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(std::string type);
	WrongCat(const WrongCat& tmp);
	~WrongCat(void);

	virtual void	makeSound(void) const;
};

#endif