/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:44:10 by flavian           #+#    #+#             */
/*   Updated: 2024/04/10 19:18:09 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = "ScavTrap";
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap naming constructor called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
}

ScavTrap::ScavTrap(const ScavTrap &tmp)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->_name = tmp.getName();
	this->_hp = tmp.getStat("HP");
	this->_ep = tmp.getStat("EP");
	this->_ad = tmp.getStat("AD");
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap deconstructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hp <= 0 || this->_ep <= 0)
	{
		std::cout << "ScavTrap " << this->getName() << " is too exhausted to attack !" << std::endl;
		return ;
	}
	else
	{
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << " for " << this->getStat("AD") << " damage !" << std::endl;
		this->_ep--;
	}
}

void	ScavTrap::guardGate()
{
	if (this->_hp <= 0 || this->_ep <= 0)
	{
		std::cout << "ScavTrap " << this->getName() << " is too exhausted to guard the gate !" << std::endl;
		return ;
	}
	else
	{
		std::cout << "ScavTrap " << this->getName() << " is garding the guate, none shall pass !" << std::endl;
		this->_ep--;
	}
}