/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:46:11 by flavian           #+#    #+#             */
/*   Updated: 2024/04/10 18:31:22 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	jeb("Jeb");
	ClapTrap	tony("Tony");

	jeb.attack("Tony");
	jeb.attack("Tony");
	jeb.attack("Tony");
	jeb.attack("Tony");
	jeb.attack("Tony");
	jeb.attack("Tony");
	jeb.attack("Tony");
	jeb.attack("Tony");
	jeb.attack("Tony");
	jeb.attack("Tony");
	jeb.attack("Tony");
	jeb.attack("Tony");
	jeb.attack("Tony");
	jeb.attack("Tony");
	jeb.attack("Tony");
	jeb.attack("Tony");
	jeb.attack("Tony");
	jeb.attack("Tony");
	jeb.attack("Tony");

	tony.takeDamage(1);
	tony.takeDamage(1);
	tony.takeDamage(1);
	tony.takeDamage(1);
	tony.takeDamage(1);
	tony.takeDamage(1);
	tony.takeDamage(1);
	tony.takeDamage(1);
	tony.takeDamage(1);
	tony.takeDamage(1);
	tony.takeDamage(1);
	tony.takeDamage(1);
	tony.takeDamage(1);

	tony.attack("Jeb");

	tony.beRepaired(1);
	tony.beRepaired(1);
	tony.beRepaired(1);
	tony.beRepaired(1);
	tony.beRepaired(1);

}