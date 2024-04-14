/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:46:18 by flavian           #+#    #+#             */
/*   Updated: 2024/04/10 18:57:56 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
private:

	std::string	_name;
	int	_hp;
	int	_ep;
	int	_ad;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &tmp);
	~ClapTrap();
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	std::string	getName() const;
	int	getStat(std::string stat) const;
};

#endif
