/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:12:30 by flavian           #+#    #+#             */
/*   Updated: 2024/03/18 13:18:34 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str= "HI THIS IS BRIAN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "The memory adress of the string variable : " << &str << std::endl;
	std::cout << "The memory adress held by stringPTR : " << stringPTR << std::endl;
	std::cout << "The memory adress held by stringREF : " << &stringREF << std::endl;

	std::cout << "The value of the string variable : " << str << std::endl;
	std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;

	return (0);
}