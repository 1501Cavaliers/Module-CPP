/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:08:39 by flavian           #+#    #+#             */
/*   Updated: 2024/03/17 15:25:29 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->contacts;
	this->i = 0;
	this->size;
}

bool	PhoneBook::START(void)
{
	std::string	buf;

	while (1)
	{
		std::cout << "Enter command : ";
		std::getline(std::cin, buf);
		if (std::cin.eof())
			PhoneBook::EXIT();
		if (buf == "ADD")
			PhoneBook::ADD();
		else if (buf == "SEARCH")
			PhoneBook::SEARCH();
		else if (buf == "EXIT")
			PhoneBook::EXIT();
	}
	return (1);
}

bool	PhoneBook::ADD(void)
{
	this->contacts[this->i];
	int	y = 0;
	std::string	buf;

	if (this->i > 7)
		this->i = 0;

	while (y < 5)
		y = this->contacts[this->i].set_info(y, my_getline(this->tab[y]));

	this->i++;

	if (this->size < 8)
		this->size++;
	
	return (1);
}

bool	PhoneBook::SEARCH(void)
{
	int	i = 0;
	int	y = 0;
	std::string	tab[3];
	std::string	buf;
	int	index;
	
	if (this->size == 0)
	{
		std::cout << "Phonebook is empty !" << std::endl;
		return (0);
	}
	std::cout << "     index|first name| last name|  nickname|" << std::endl;
	while (i < this->size)
	{
		std::cout << "         " << (char) i + 1 << "|";
		while (y < 3)
		{
			tab[y] = PhoneBook::hanlde_string(this->contacts[i].get_info(y));
				std::cout << tab[y] << '|';
			y++;
		}
		y = 0;
		std::cout << std::endl;
		i++;
	}
	while (1)
	{
		buf = PhoneBook::my_getline("Enter index");
		if (!PhoneBook::is_index(buf))
			std::cout << "Wrong index, try again !" << std::endl;
		else
		{
			index = buf[0] - 48;
			while (y < 5)
			{
				std::cout << this->tab[y] << " : " << this->contacts[index - 1].get_info(y) << std::endl;
				y++;
			}
			y = 0;
			break ;
		}
	}
	return (1);
}

void	PhoneBook::EXIT(void)
{
	exit (1);
}

PhoneBook::~PhoneBook(void){}