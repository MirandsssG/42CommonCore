/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 21:47:49 by mirandsssg        #+#    #+#             */
/*   Updated: 2026/03/11 23:54:40 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ){
	return;
}

PhoneBook::~PhoneBook( void ){	
	return;
}

void	PhoneBook::show_instructions( void ){
	std::cout << "Enter a phonebook command (ADD, SEARCH, EXIT): " << std::endl;
}