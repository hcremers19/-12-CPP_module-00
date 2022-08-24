/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:54:57 by hcremers          #+#    #+#             */
/*   Updated: 2022/08/23 11:51:24 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <cstdlib>
# include <iomanip>
# include <iostream>
# include <string>
# include <cctype>

class	PhoneBook
{
	private:
		Contact		list[8];

	public:
		PhoneBook(void);
		~PhoneBook(void);
		Contact		getContact(int index) const;
		void		setFrstName(int index, std::string input);
		void		setLastName(int index, std::string input);
		void		setPhoneNbr(int index, std::string input);
		void		setNickname(int index, std::string input);
		void		setSecret(int index, std::string input);
};

#endif