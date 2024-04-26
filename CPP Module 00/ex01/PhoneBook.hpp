/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:30:59 by flavian           #+#    #+#             */
/*   Updated: 2024/04/26 15:24:18 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact Repertory[8];
	int		i;
	int		size;
	void	input_info();
public:
	PhoneBook();
	~PhoneBook();
	void	add();
	void	search();
	bool		START(void);
	std::string	my_getline(std::string str);
	bool		is_whitespace(std::string buf);
};




#endif