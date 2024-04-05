/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 17:24:59 by flavian           #+#    #+#             */
/*   Updated: 2024/03/17 15:22:09 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

bool	PhoneBook::is_index(std::string buf)
{
	int	nb;

	if (buf.size() != 1)
		return (false);
	if (buf.at(0) < '1' || buf.at(0) > '8')
		return (false);
	nb = buf[0] - 48;
	if (nb > this->size)
		return (false);
	return (true);
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

std::string	PhoneBook::add_space(std::string str, int len)
{
	int	diff = 10 - len;
	int	i = 0;
	std::string	cpy = str;

	if (len == 0)
		return (NULL);
	while (i < diff)
	{
		cpy.insert(0,1, ' ');
		i++;
	}
	return (cpy);
}

std::string	PhoneBook::tronk_str(std::string str, int len)
{
	int	diff = len - 10;
	std::string	cpy = str;

	cpy.insert(9, 1, '.');
	cpy.erase(10, diff + 1);
	return (cpy);
}

std::string	PhoneBook::hanlde_string(std::string str)
{
	int len = str.size();

	if (len < 10)
		return (PhoneBook::add_space(str, len));
	else if (len == 10)
		return (str);
	else
		return (PhoneBook::tronk_str(str, len));
}


std::string	PhoneBook::my_getline(std::string str)
{
	std::string	buf;

	while (buf == "" || PhoneBook::is_whitespace(buf))
	{
		std::cout << str << " : ";
		std::getline(std::cin, buf);
		if (std::cin.eof())
			PhoneBook::EXIT();
	}
	return (buf);
}