/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:45:50 by flavian           #+#    #+#             */
/*   Updated: 2024/04/10 18:59:36 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->_name = "ClapTrap";
	this->_hp = 10;
	this->_ep = 10;
	this->_ad = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Naming constructor called" << std::endl;
	this->_name = name;
	this->_hp = 10;
	this->_ep = 10;
	this->_ad = 0;
}

ClapTrap::ClapTrap(const ClapTrap &tmp)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_name = tmp._name;
	this->_hp = tmp._hp;
	this->_ep = tmp._ep;
	this->_ad = tmp._ad;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Deconstructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_ep > 0 && this->_hp > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage !" << std::endl;
		this->_ep -= 1;
		if (this->_ep < 0)
			this->_ep = 0;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is exhausted or dead, it cannot attack !" << std::endl; 
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead !" << std::endl;
		return ;
	}
	this->_hp -= amount;
	if (this->_hp < 0)
		this->_hp = 0;
	std::cout << "ClapTrap " << this->_name << " lost " << amount << " hit points (" << this->_hp << " HP left)!" << std::endl; 
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ep > 0 && this->_hp > 0)
	{
		this->_hp += amount;
		std::cout << "ClapTrap " << this->_name << " restored " << amount << " hit points (" << this->_hp << " HP left)!" << std::endl;
		this->_ep -= 1;
		if (this->_ep < 0)
			this->_ep = 0;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is exhausted or dead it cannot be repaired !" << std::endl; 
}
