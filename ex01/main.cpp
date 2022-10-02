/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozgur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:34:53 by bozgur            #+#    #+#             */
/*   Updated: 2022/10/02 16:14:59 by bozgur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook book;
	std::string input;

	std::cout << "== Welcome to crappy phonebook ==" << std::endl;
	while (1)
	{
		std::cin >> input;
		if (input == "ADD")
			book.add_contact();
		else if (input == "SEARCH")
			std::cout << "Hello, you in search" << std::endl;
		else if (input == "EXIT")
		{
			std::cout << "Bye!" << std::endl;
			return (0);
		}
	}

}
