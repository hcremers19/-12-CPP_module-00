/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:54:49 by hcremers          #+#    #+#             */
/*   Updated: 2022/08/23 11:33:37 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

Contact     PhoneBook::getContact(int index) const
{
    return (this->list[index]);
}

void		PhoneBook::setFrstName(int index, std::string input)
{
	this->list[index].setFrstName(input);
	return;
}

void		PhoneBook::setLastName(int index, std::string input)
{
	this->list[index].setLastName(input);
	return;
}

void		PhoneBook::setPhoneNbr(int index, std::string input)
{
	this->list[index].setPhoneNbr(input);
	return;
}

void		PhoneBook::setNickname(int index, std::string input)
{
	this->list[index].setNickname(input);
	return;
}

void		PhoneBook::setSecret(int index, std::string input)
{
	this->list[index].setSecret(input);
	return;
}
