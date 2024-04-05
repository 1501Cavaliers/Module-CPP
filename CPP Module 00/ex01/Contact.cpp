/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavian <flavian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:08:37 by flavian           #+#    #+#             */
/*   Updated: 2024/03/16 17:02:42 by flavian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	// this->info;
	this->index = 0;
}

int	Contact::set_info(int i, std::string str)
{
	if (i < 0)
		return (-1);
	this->info[i] = str;
	return (i + 1);
}

std::string	Contact::get_info(int i) const
{
	if (i > 4)
		return (NULL);
	return (this->info[i]);
}


Contact::~Contact(void){}