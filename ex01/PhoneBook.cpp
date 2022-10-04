/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozgur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 23:01:44 by bozgur            #+#    #+#             */
/*   Updated: 2022/10/04 07:07:06 by bozgur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
	
}

void	PhoneBook::add_contact()
{
	static int	idx;

	_contacts[idx % 8].init();
	_contacts[idx % 8].set_index(idx % 8);
	idx++;
}

void	PhoneBook::list_contacts(void)
{
	std::cout << "_________ CONTACTS _________" << std::endl;
	for (int i = 0; i < 8; i++)
		_contacts[i].view(i);
	std::cout << std::endl;
}
