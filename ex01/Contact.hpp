/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:54:57 by hcremers          #+#    #+#             */
/*   Updated: 2022/08/23 11:51:00 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <cstdlib>
# include <iomanip>
# include <iostream>
# include <string>
# include <cctype>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);
		std::string	getFrstName(void) const;
		std::string	getLastName(void) const;
		std::string	getPhoneNbr(void) const;
		std::string	getNickname(void) const;
		std::string	getSecret(void) const;
		void		setFrstName(std::string input);
		void		setLastName(std::string input);
		void		setPhoneNbr(std::string input);
		void		setNickname(std::string input);
		void		setSecret(std::string input);

	private:
		std::string	frstName;
		std::string	lastName;
		std::string	phoneNbr;
		std::string	nickname;
		std::string	secret;
};

#endif