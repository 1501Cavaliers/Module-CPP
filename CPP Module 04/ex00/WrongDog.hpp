/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:50:04 by flavian           #+#    #+#             */
/*   Updated: 2024/04/13 15:04:29 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class	WrongDog : public WrongAnimal
{
public:
	WrongDog(void);
	WrongDog(std::string type);
	WrongDog(const WrongDog& tmp);
	~WrongDog(void);

	virtual void	makeSound() const;
};

#endif