/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:51:21 by flavian           #+#    #+#             */
/*   Updated: 2024/03/17 21:11:48 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 10;

	Zombie	*horde = horde->zombieHorde(N, "Hitler");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
	return (1);
}