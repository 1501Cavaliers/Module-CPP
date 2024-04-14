/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:43:55 by flavian           #+#    #+#             */
/*   Updated: 2024/04/12 19:23:15 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAp_HPP
#define SCAVTRAp_HPP


#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &tmp);
	~ScavTrap();

	void	attack(const std::string &target);
	void	guardGate();
};

#endif