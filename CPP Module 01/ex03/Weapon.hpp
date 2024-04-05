/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:20:45 by flavian           #+#    #+#             */
/*   Updated: 2024/03/18 13:50:08 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class	Weapon
{
	public:

	Weapon(std::string weapon_name);
	~Weapon();
	const std::string	&getType(void) const;
	void	setType(std::string str);

	private:

	std::string	_type;
};

#endif