/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 12:33:36 by emgarcia          #+#    #+#             */
/*   Updated: 2022/01/10 17:47:17 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void)
{}

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	this->_totalAmount += this->_amount;
	std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount() << ";created" << std::endl;
}

Account::~Account(void)
{
	std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount() << ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return(_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return(_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount() << ";deposit:" << deposit;
	this->_totalNbDeposits++;
	this->_nbDeposits++;
	this->_totalAmount += deposit;
	this->_amount += deposit;
	std::cout << ";amount:" << checkAmount() << ";nb_deposits:" << this->_nbDeposits <<  std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount();
	if (this->_amount >= withdrawal)
	{
		_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << checkAmount() << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	else
		std::cout << ";withdrawal:refused" << std::endl;
	return (0);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount() << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
