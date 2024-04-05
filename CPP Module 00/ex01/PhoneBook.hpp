/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:08:35 by flavian           #+#    #+#             */
/*   Updated: 2024/03/17 15:21:01 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
class	PhoneBook
{
	public:	

	PhoneBook(void);
	~PhoneBook(void);
	bool		START(void);
	bool		ADD(void);
	bool		SEARCH(void);
	void		EXIT(void);
	bool		is_whitespace(std::string buf);
	bool		is_index(std::string buf);
	std::string	hanlde_string(std::string str);
	std::string	add_space(std::string str, int len);
	std::string	tronk_str(std::string str, int len);
	std::string	my_getline(std::string str);

	private :

	int		i;
	int		size;
	Contact	contacts[8];
	std::string	tab[5] = {"first name", "last name", "nickname", "phonenumber", "darkest secret"};
	std::string	search;
};

#endif