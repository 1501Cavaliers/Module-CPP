/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:18:43 by flavian           #+#    #+#             */
/*   Updated: 2024/04/10 19:25:00 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_name = "FragTrap";
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap naming constructor called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}

FragTrap::FragTrap(const FragTrap &tmp)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->_name = tmp.getName();
	this->_hp = tmp.getStat("HP");
	this->_ep = tmp.getStat("EP");
	this->_ad = tmp.getStat("AD");
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap deconstructor called" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (this->_hp <= 0 || this->_ep <= 0)
	{
		std::cout << "FragTrap " << this->getName() << " is too exhausted to request a high five !" << std::endl;
		return ;
	}
	else
	{
		std::cout << "FragTrap " << this->getName() << " wishes to high five his best buddy !!" << std::endl;
		this->_ep--;
	}
	
}