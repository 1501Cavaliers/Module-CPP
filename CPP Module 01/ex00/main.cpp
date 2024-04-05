/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:33:54 by flavian           #+#    #+#             */
/*   Updated: 2024/03/17 19:37:44 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	test;
	Zombie	*test1;

	test1 = test1->newZombie("Dylan");
	test1->announce();

	test.randomChump("Francis");
	delete(test1);
	return (1);
}