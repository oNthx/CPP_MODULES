/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozgur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 23:01:44 by bozgur            #+#    #+#             */
/*   Updated: 2022/09/26 01:08:55 by bozgur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::add_contact()
{
	int			idx;
	PhoneBook	contact;

	idx = 0;
	std::cout << "________________________________________________" << std::endl;
	std::cout << "| In here you can add some contacts to your book|" << std::endl;
	std::cout << "|_______________________________________________|" << std::endl << std::endl;
	
	std::cout << "Name of person: ";
	std::cin >> contact.contact[0][0];
	std::cout << std::endl;
	
	std::cout << "Surname of person: ";
	std::cin >> contact.contact[0][1];
	std::cout << std::endl;
	
	std::cout << "Phone: ";
	std::cin >> contact.contact[0][2];
	std::cout << std::endl;
	
	std::cout << "Nickname: ";
	std::cin >> contact.contact[0][3];
	std::cout << std::endl;

	std::cout << "Darkest secret: ";
	std::cin >> contact.contact[0][4];
	std::cout << std::endl;
}
