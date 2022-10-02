/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozgur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 23:01:44 by bozgur            #+#    #+#             */
/*   Updated: 2022/10/02 21:21:31 by bozgur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook()
{
	this->number = 0;
}

PhoneBook::~PhoneBook()
{
	
}

void	PhoneBook::add_contact()
{
	contact	contact;

	if (number < 8)
	{
		std::cout << "________________________________________________" << std::endl;
		std::cout << "| In here you can add some contacts to your book|" << std::endl;
		std::cout << "|_______________________________________________|" << std::endl << std::endl;

		std::cout << "Name of person: ";
		std::cin >> contact.name;
		std::cout << std::endl;

		std::cout << "Surname of person: ";
		std::cin >> contact.surname;
		std::cout << std::endl;
	
		std::cout << "Phone: ";
		std::cin >> contact.phone;
		std::cout << std::endl;
	
		std::cout << "Nickname: ";
		std::cin >> contact.nickname;
		std::cout << std::endl;

		std::cout << "Darkest secret: ";
		std::cin >> contact.dsecret;
		std::cout << std::endl;

		contacts.push_back(contact);
		this->number++;
	}
	else if (number == 8)
	{
		std::cout << "You have a max contacts value!" << std::endl;
	}
}
