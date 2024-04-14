/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 19:01:36 by flavian           #+#    #+#             */
/*   Updated: 2024/04/12 19:18:10 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Diamond Trap default constructor called" << std::endl;
	this->_name = "DiamondTrap";
	ClapTrap::_name = "DiamondTrap_clap_name";
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_ad = FragTrap::_ad;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "Diamond Trap naming constructor called" << std::endl;
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_ad = FragTrap::_ad;
}

DiamondTrap::DiamondTrap(const DiamondTrap &tmp)
{
	std::cout << "Diamond Trap copy constructor called" << std::endl;
	this->_name = tmp.getName();
	ClapTrap::_name = tmp.getName() + "_clap_name";
	this->_hp = tmp.getStat("HP");
	this->_ep = tmp.getStat("EP");
	this->_ad = tmp.getStat("AD");
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond Trap deconstructor called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Who Am I ... ?" << std::endl;
	std::cout << "Name : " << this->getName() << std::endl;
	std::cout << "Clap Name : " << this->ClapTrap::_name << std::endl;
	std::cout << "HP : " << this->getStat("HP") << std::endl;
	std::cout << "EP : " << this->getStat("EP") << std::endl;
	std::cout << "AD : " << this->getStat("AD") << std::endl;
}