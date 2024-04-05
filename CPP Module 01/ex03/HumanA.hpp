/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:20:34 by flavian           #+#    #+#             */
/*   Updated: 2024/03/18 13:55:14 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	public :

	HumanA(std::string name, Weapon	&weapon);
	~HumanA();
	void	attack();
	void	setWeapon(Weapon weapon);

	private :

	std::string	_name;
	Weapon	&_weapon;
};

#endif