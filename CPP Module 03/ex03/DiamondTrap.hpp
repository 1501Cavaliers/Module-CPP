/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:57:23 by flavian           #+#    #+#             */
/*   Updated: 2024/04/12 19:23:51 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap :  public FragTrap,  public ScavTrap
{
protected:

	std::string	_name;
	// using	FragTrap::_hp;
	// using	ScavTrap::_ep;
	// using	FragTrap::_ad;

public:

	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &tmp);
	~DiamondTrap();
	// void	initDiamond(std::string name);

	using	ScavTrap::attack;
	void	whoAmI();
};

#endif