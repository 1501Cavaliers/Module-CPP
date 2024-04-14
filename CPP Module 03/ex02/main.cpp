/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:46:11 by flavian           #+#    #+#             */
/*   Updated: 2024/04/10 19:27:04 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap bob ("Bob");
	ScavTrap jeb ("Jeb");
	FragTrap tony ("tony");

	bob.attack("Jeb");
	jeb.takeDamage((unsigned) bob.getStat("AD"));
	jeb.guardGate();
	tony.highFivesGuys();
}