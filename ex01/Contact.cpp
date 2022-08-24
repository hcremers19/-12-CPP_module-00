/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:54:49 by hcremers          #+#    #+#             */
/*   Updated: 2022/08/23 11:51:10 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

std::string	Contact::getFrstName(void) const
{
	return (this->frstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->lastName);
}

std::string	Contact::getPhoneNbr(void) const
{
	return (this->phoneNbr);
}

std::string	Contact::getNickname(void) const
{
	return (this->nickname);
}

std::string	Contact::getSecret(void) const
{
	return (this->secret);
}

void		Contact::setFrstName(std::string input)
{
	this->frstName = input;
	return;
}

void		Contact::setLastName(std::string input)
{
	this->lastName = input;
	return;
}

void		Contact::setPhoneNbr(std::string input)
{
	this->phoneNbr = input;
	return;
}

void		Contact::setNickname(std::string input)
{
	this->nickname = input;
	return;
}

void		Contact::setSecret(std::string input)
{
	this->secret = input;
	return;
}
