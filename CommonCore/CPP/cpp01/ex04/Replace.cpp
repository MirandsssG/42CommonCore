/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:00:09 by mirandsssg        #+#    #+#             */
/*   Updated: 2026/03/16 19:25:53 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2) {
	this->filename = filename;
	this->s1 = s1;
	this->s2 = s2;
}

Replace::~Replace() {
	return;
}

bool	Replace::replacef() {
	if (s1.empty())
	{
		std::cerr << "Error: string to find cannot be empty" << std::endl;
		return (false);
	}
	cd 
}