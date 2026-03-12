/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 21:47:58 by mirandsssg        #+#    #+#             */
/*   Updated: 2026/03/12 13:07:06 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ) {
	return;
}

Contact::~Contact( void ) {	
	return;
}

bool	only_letters(const std::string& str) {
	for (size_t i = 0; i < str.length(); i++)
		if (!std::isalpha(str[i]))
			return (false);
	return (true);
}

bool	only_numbers(const std::string& str) {
	for (size_t i = 0; i < str.length(); i++)
		if (!std::isdigit(str[i]))
			return (false);
	return (true);
}

void	Contact::input_contact() {
	while (true)
	{
		std::cout << "Enter first name: ";
		std::getline(std::cin, first_name);
		if (!first_name.empty() && only_letters(first_name))
			break;
		std::cout << "Invalid input. First name must contain only letters and must not be empty." << std::endl;
	}
	while (true)
	{
		std::cout << "Enter last name: ";
		std::getline(std::cin, last_name);
		if (!last_name.empty() && only_letters(last_name))
			break;
		std::cout << "Invalid input. Last name must contain only letters and must not be empty." << std::endl;
	}
	while (true)
	{
		std::cout << "Enter nickname: ";
		std::getline(std::cin, nickname);
		if (!nickname.empty() && only_letters(nickname))
			break;
		std::cout << "Invalid input. Nickname must contain only letters and must not be empty." << std::endl;
	}
	while (true)
	{
		std::cout << "Enter phone numbers: ";
		std::getline(std::cin, phone_number);
		if (!phone_number.empty() && only_numbers(phone_number))
			break;
		std::cout << "Invalid input. Phone number must contain only letters and must not be empty." << std::endl;
	}
	while (true)
	{
		std::cout << "Enter darkest secret: ";
		std::getline(std::cin, darkest_secret);
		if (!darkest_secret.empty())
			break;
	}
}

void	Contact::display_short(int index) const {
	
}

void	Contact::display_full() const {
	
}