/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:51:46 by flavian           #+#    #+#             */
/*   Updated: 2024/04/13 17:14:35 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal	*tab[100];

	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
	}
	for (int i = 0; i < 100; i++)
		delete tab[i];	
	
	return (0);
}