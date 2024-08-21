/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:00:34 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/19 13:00:34 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->Hit = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << "A new ScavTrap has appeared!" << std::endl << this->Name << ": Hi !" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->Hit = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << "A new ScavTrap has appeared!" << std::endl << this->Name << ": Hi !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "A new ScavTrap has appeared!" << std::endl << this->Name << ": Hi !" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap (" << this->Name << "): Bye Bye ..." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->Name << " is now in Gate keeper mode." << std::endl;
}