/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 21:47:49 by mirandsssg        #+#    #+#             */
/*   Updated: 2026/03/12 17:37:55 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {
	index = 0;
	count = 0;
	return;
}

PhoneBook::~PhoneBook( void ) {	
	return;
}

void	PhoneBook::show_instructions() const {
	std::cout << "Enter a phonebook command (ADD, SEARCH, EXIT): " << std::endl;
}

void	PhoneBook::add_contacts() {
	contacts[index].input_contact();
	index = (index + 1) % 8;
	if (count < 8)
		count++;
	std::cout << "Contact added successfully!" << std::endl;
}

void	PhoneBook::search_contacts() const {
	if (count == 0)
	{
		std::cout << "No contacts in the phonebook. Please add some contacts first." << std::endl;
		return;
	}
	
	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;
	
	for (int i = 0; i < count; i++)
		contacts[i].display_short(i);
	
	std::cout << "Enter the index of the contact to display: ";
	std::string	input;
	std::getline(std::cin, input);

	if (input.empty() || input.length() > 1 || !isdigit(input[0]))
	{
		std::cout << "Invalid index. Leaving search command" << std::endl;
		return;
	}

	int	index = input[0] - '0';
	if (index < 0 || index >= count)
	{
		std::cout << "Invalid index. Leaving search command" << std::endl;
		return;
	}
	
	contacts[index].display_full();
}
