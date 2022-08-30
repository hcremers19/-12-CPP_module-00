/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:09:10 by hcremers          #+#    #+#             */
/*   Updated: 2022/08/30 12:14:40 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <iostream>
#include <iomanip>

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	std::cout << "index:" << _nbAccounts << ";amount:" << initial_deposit << ";created" << std::endl;
	_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += initial_deposit;
	return;
}

Account::~Account(void)
{
	_displayTimestamp();
	_nbAccounts--;
	std::cout << "index:" << _nbAccounts << ";amount:" << _amount << ";closed" << std::endl;
	return;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	int p_amount = this->_amount;
	this->_amount += deposit;
	_nbDeposits++;
	this->_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
	return;
}

bool	Account::makeWithdrawal(int withdrawal)
{

	_displayTimestamp();
	if (withdrawal <= _amount)
	{
		int p_amount = this->_amount;
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		this->_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
	return (false);
}

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
	return;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp()
{
	time_t		rawtime;
	struct tm*	timeinfo;
	char buffer	[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	strftime(buffer, 80, "[%G%m%e_%H%M%S] ", timeinfo);
	std::cout << buffer;
}
