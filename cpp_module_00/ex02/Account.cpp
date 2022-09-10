/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:45:28 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/10 23:07:58 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit): _amount(initial_deposit){
	this->_accountIndex = Account::_nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	std::cout
	<< "index:"		<< this->_accountIndex	<< ";"
	<< "amount:"	<< this->_amount		<< ";"
	<< "created"	<< std::endl;
}

Account::~Account(void){
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
	Account::_displayTimestamp();
	std::cout
	<< "index:"		<< this->_accountIndex	<< ";"
	<< "amount:"	<< this->_amount		<< ";"
	<< "closed"	<< std::endl;
}

int Account::getNbAccounts(void){
	return(Account::_nbAccounts);
}
int Account::getTotalAmount(void){
	return(Account::_totalAmount);
}
int Account::getNbDeposits(void){
	return(Account::_totalNbDeposits);
}
int Account::getNbWithdrawals(void){
	return(Account::_totalNbWithdrawals);
}
void Account::displayAccountsInfos(void){
	Account::_displayTimestamp();
	std::cout
	<< "accounts:"		<< Account::_nbAccounts			<< ";"
	<< "total:"			<< Account::_totalAmount		<< ";"
	<< "deposits:"		<< Account::_totalNbDeposits	<< ";"
	<< "withdrawals:"	<< Account::_totalNbWithdrawals	<< std::endl;
}


void Account::makeDeposit(int deposit){
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout
	<< "index:"			<< this->_accountIndex	<< ";"
	<< "p_amount:"		<< this->_amount		<< ";"
	<< "deposit:" 		<< deposit				<< ";";
	this->_amount += deposit;
	std::cout
	<< "amount:"		<< this->_amount		<< ";"
	<< "nb_deposits:"	<< this->_nbDeposits	<< std::endl;
}

bool Account::makeWithdrawal(int withdrawal){
	Account::_displayTimestamp();
	std::cout
	<< "index:"			<< this->_accountIndex	<< ";"
	<< "p_amount:"		<< this->_amount		<< ";"
	<< "withdrawal:";
	if (withdrawal > this->_amount){
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout
	<< withdrawal		<< ";";
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout
	<< "amount:"		<< this->_amount		<< ";"
	<< "nb_withdrawals:"	<< this->_nbWithdrawals	<< std::endl;
	return (true);
}

int Account::checkAmount(void) const{
	return(this->_amount);
}

void Account::displayStatus(void) const{
	Account::_displayTimestamp();
	std::cout
	<< "index:"			<< this->_accountIndex	<< ";"
	<< "amount:"		<< this->_amount		<< ";"
	<< "deposits:" 		<< this->_nbDeposits	<< ";"
	<< "withdrawals:"	<< this->_nbWithdrawals	<< std::endl;
}

void Account::_displayTimestamp(void){
	char formatted[100];
	std::time_t timestamp = std::time(NULL);
	if (std::strftime(formatted, sizeof(formatted), "%Y%m%d_%H%M%S", std::localtime(&timestamp))) {
		std::cout << "[" << formatted << "] ";
	}
}