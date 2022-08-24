/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:17:41 by hcremers          #+#    #+#             */
/*   Updated: 2022/08/23 11:45:10 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string answer(std::string output)
{
	std::string input;

	std::cout << output;
	getline(std::cin, input);
	while (!input.length())
	{
		std::cout << output;
		getline(std::cin, input);
	}
	return (input);
}

void	size_ok(std::string info)
{
	std::cout << "|";
	if (info.length() > 10)
		std::cout << info.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << std::right << info;
}

void	insert_tab(Contact contact, int i)
{
	std::cout << "| " << i + 1 << " ";
	size_ok(contact.getFrstName());
	size_ok(contact.getLastName());
	size_ok(contact.getNickname());
	std::cout << "|" << std::endl;
	std::cout << "+---+----------+----------+----------+" << std::endl;
}

int	isalldigit(std::string str)
{
	unsigned int	i = 0;

	while (i < str.length())
	{
		if (!isdigit(str[i]))
			return (1);
		else
			i++;
	}
	return (0);
}

void	search_attributes(PhoneBook instance)
{
	std::string	input;
	int			index;

	for (int index = 0; index < 8; index++)
		insert_tab(instance.getContact(index), index);
	std::cout << "Insert contact index > ";
	getline(std::cin, input);
	if (isalldigit(input) || input == "")
	{
		std::cout << "Incorrect index." << std::endl << std::endl;
		return;
	}
	index = std::stoi(input) - 1;
	if (index > 7 || index < 0 || instance.getContact(index).getFrstName() == "")
	{
		std::cout << "Incorrect index." << std::endl << std::endl;
		return;
	}
	std::cout << "First name:     " << instance.getContact(index).getFrstName() << std::endl;
	std::cout << "Last name:      " << instance.getContact(index).getLastName() << std::endl;
	std::cout << "Nickname:       " << instance.getContact(index).getNickname() << std::endl;
	std::cout << "Phone number:   " << instance.getContact(index).getPhoneNbr() << std::endl;
	std::cout << "Darkest secret: " << instance.getContact(index).getSecret() << std::endl << std::endl;
}

int	main(void)
{
	PhoneBook	instance;
	std::string	input;
	int			i = 0;

	std::cout << "Welcome to your awesome phone book!" << std::endl;
	while (1)
	{
		std::cout << ">>> ";
		getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout << "Contact index: " << i + 1 << std::endl;
			instance.setFrstName(i, answer("First name     > "));
			instance.setLastName(i, answer("Last name      > "));
			instance.setNickname(i, answer("Nickname       > "));
			instance.setPhoneNbr(i, answer("Phone number   > "));
			instance.setSecret(i, answer("Darkest secret > "));
			std::cout << std::endl;
			i++;
		}
		else if (input == "SEARCH")
		{
			std::cout << "+---+----------+----------+----------+" << std::endl;
			search_attributes(instance);
		}
		else if (input == "EXIT")
		{
			std::cout << "Ok, bye!" << std::endl;
			return (0);
		}
		else
		{
			std::cout << "Please use ADD, SEARCH or EXIT" << std::endl << std::endl;
		}
		if (i > 7)
			i = 0;
	}
	return(0);
}
