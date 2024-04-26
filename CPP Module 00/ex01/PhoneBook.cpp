/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:31:13 by flavian           #+#    #+#             */
/*   Updated: 2024/04/26 15:51:05 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	i = 0;
	size = 0;
}

PhoneBook::~PhoneBook(){}

bool	PhoneBook::START(void)
{
	std::string	buf;

	while (1)
	{
		buf = PhoneBook::my_getline("Enter Command");
		if (std::cin.eof())
			exit (1);
		if (buf == "ADD")
			PhoneBook::add();
		else if (buf == "SEARCH")
			PhoneBook::search();
		else if (buf == "EXIT")
			exit (1);
	}
	return (1);
}

void	PhoneBook::input_info()
{
	std::string	str = "";

	while (str == "")
	{
		str = PhoneBook::my_getline("Enter first name");
		if (std::cin.eof())
			exit (1);
	}
	Repertory[i].setName(str);
	str = "";
	while (str == "")
	{
		str = PhoneBook::my_getline("Enter last name");
		if (std::cin.eof())
			exit (1);
	}
	Repertory[i].setLast_name(str);
	str = "";
	while (str == "")
	{
		str = PhoneBook::my_getline("Enter nickname");
		if (std::cin.eof())
			exit (1);
	}
	Repertory[i].setNickname(str);
	str = "";
	while (str == "")
	{
		str = PhoneBook::my_getline("Enter phone number");
		if (std::cin.eof())
			exit (1);
	}
	Repertory[i].setPhone_number(str);
	str = "";
	while (str == "")
	{
		str = PhoneBook::my_getline("Enter darkest secret");
		if (std::cin.eof())
			exit (1);
	}
	Repertory[i].setDarkest_secret(str);
}

void	PhoneBook::add()
{
	input_info();
	i = ++i % 8;
	if (size < 8)
		size++;
}

std::string	get_element(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);

}

bool	PhoneBook::is_whitespace(std::string buf)
{
	int	i = 0;

	while (buf[i])
	{
		if (buf[i] < 9 && buf[i] > 13 || buf[i] != 32)
			return (0);
		i++;
	}
	return (1);
}

std::string	PhoneBook::my_getline(std::string str)
{
	std::string	buf;

	while (buf == "" || PhoneBook::is_whitespace(buf))
	{
		std::cout << str << " : ";
		std::getline(std::cin, buf);
		if (std::cin.eof())
			exit (1);
	}
	return (buf);
}

void	PhoneBook::search()
{
	int			x = 0;
	std::string	str = "";
	while (x < size)
	{
		std::cout << std::setw(10) << x + 1 << '|';
		std::cout << std::setw(10) << get_element(Repertory[x].getName()) << '|';
		std::cout << std::setw(10) << get_element(Repertory[x].getLast_name()) << '|';
		std::cout << std::setw(10) << get_element(Repertory[x].getNickname()) << '|';
		std::cout << '\n';
		x++;
	}
	std::cout << "Put the desired index :";
	std::getline(std::cin, str);
	if (std::cin.eof())
	{
		str = "";
		std::cin.clear();
			std::cout << std::endl;
	}
	if (str.empty())
		std::cout << "You have enter no index, please SEARCH again." << std::endl;
	else
	{
		x = std::atoi(str.c_str()) - 1;
		if (x >= 0 && x < size)
		{
			std::cout << "Name : " << Repertory[x].getName() << std::endl;
			std::cout << "Last name : " << Repertory[x].getLast_name() << std::endl;
			std::cout << "Cool nickname : " << Repertory[x].getNickname() << std::endl;
			std::cout << "Phone number : " << Repertory[x].getPhone_number() << std::endl;
			std::cout << "Darkest secret : " << Repertory[x].getDarkest_secret() << std::endl;
		}
		else
			std::cout << "Invalide index, please SEARCH again." << std::endl;
	}
}