/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 21:47:49 by mirandsssg        #+#    #+#             */
/*   Updated: 2026/03/12 13:01:22 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {
	index = 0;
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
	std::cout << "SEARCH confirmed" << std::endl;
}