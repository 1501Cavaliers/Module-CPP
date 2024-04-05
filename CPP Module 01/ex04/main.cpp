/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:06:08 by flavian           #+#    #+#             */
/*   Updated: 2024/04/04 14:08:27 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	create_file(char *file_name, std::string array)
{
	std::string	name = ".replace";
	name.insert(0, file_name);
	std::ofstream replace (name);
	replace << array;
	replace.close();
	return (1);
}

size_t	strlen(char *str)
{
	size_t	len = 0;
	while (str[len])
		len++;
	return (len);
}

std::string	replace_in_file(std::string array, char *s1, char*s2)
{
	size_t	lens1 = strlen(s1), lens2 = strlen(s2);

	std::size_t	found = array.find(s1);
	if (found!=std::string::npos)
	{
		array.erase(found, lens1);
		array.insert(found, s2);
		return (replace_in_file(array, s1, s2));
	}
	else
		return (array);
}

std::string	open_file(char *file_name)
{
	std::ifstream file (file_name);
	std::string	array;
	if (!file.is_open())
	{
		std::cout << "FILE ERROR" << std::endl;
		return (array);
	}

	int len = 0;
	std::string	buf;
	while (file.good())
	{
		std::getline(file, buf);
		len++;
	}
	file.close();

	std::string	append;
	int	i = 1;
	file.open(file_name);
	std::getline(file, array);
	array.append("\n");
	while (file.good() && i < len)
	{
		std::getline(file, append);
		array.append(append);
		if (i < len - 1)
			array.append("\n");
		i++;
	}
	file.close();

	return (array);
}

int	main(int ac, char	*av[])
{
	std::string	array;

	if (ac != 4)
		return (-1);
	array = open_file(av[1]);
	if (array.empty())
		return (0);
	array = replace_in_file(array, av[2], av[3]);
	create_file(av[1], array);
	return (1);
}