/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:08:45 by flavian           #+#    #+#             */
/*   Updated: 2024/03/11 14:08:49 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	r = 1;
	int	c = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[r])
		{
			while (av[r][c])
			{
				if (av[r][c] >= 97 && av[r][c] <= 122)
					std::cout << (char)(av[r][c] - 32);
				else
					std::cout << av[r][c];
				c++;
			}
			c = 0;
			r++;
		}
		std::cout << std::endl;
	}
	return (0);
}