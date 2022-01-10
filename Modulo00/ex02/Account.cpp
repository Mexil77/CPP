/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 12:33:36 by emgarcia          #+#    #+#             */
/*   Updated: 2022/01/10 16:26:10 by emgarcia         ###   ########.fr       */
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
	std::cout << "Index:" << this->_accountIndex << ";amount:" << this->_amount << ";crated" << std::endl;
}

Account::~Account(void)
{
	std::cout << "Index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
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
	std::cout << "withdrawls:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	std::cout << "Index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
	this->_totalNbDeposits++;
	this->_nbDeposits++;
	this->_totalAmount += deposit;
	this->_amount += deposit;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits <<  std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	std::cout << "Index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposits:" << this->_nbDeposits;
	if (this->_amount >= withdrawal)
	{
		_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	else
		std::cout << ";refused" << std::endl;
	return (0);
}

int		Account::checkAmount( void ) const
{
	std::cout << "algo" << std::endl;
	return (0);
}

void	Account::displayStatus( void ) const
{
	std::cout << "Index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
