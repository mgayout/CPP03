/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:26:47 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/19 11:26:47 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : Name("ClapTrap"), Hit(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "A new ClapTrap has appeared!" << std::endl << this->Name << ": Hi !" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), Hit(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "A new ClapTrap has appeared!" << std::endl << this->Name << ": Hi !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : Name(other.Name), Hit(other.Hit), EnergyPoints(other.EnergyPoints), AttackDamage(other.AttackDamage)
{
	std::cout << "A new ClapTrap has appeared!" << std::endl << this->Name << ": Hi !" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	this->Name = other.Name;
	this->Hit = other.Hit;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap (" << this->Name << "): Bye Bye ..." << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->EnergyPoints > 0)
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " point(s) of damage!" << std::endl;
		this->EnergyPoints	-= 1;
	}
	else
		std::cout << "ClapTrap " << this->Name << " can't attack " << target << " because no energy points left." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hit == 0)
	{
		std::cout << this->Name << " is already dead." << std::endl;
		return ;
	}
	while (this->Hit != 0 && amount != 0)
	{
		amount -= 1;
		this->Hit -= 1;
	}
	if (this->Hit == 0)
		std::cout << this->Name << " is dead." << std::endl;
	else
		std::cout << this->Name << " has " << this->Hit << " health points." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!amount)
	{
		std::cout << this->Name << " can't be repaired because amount is too low." << std::endl;
		return ;
	}
	else if (this->EnergyPoints == 0)
	{
		std::cout << this->Name << " can't be repaired because no energy points left." << std::endl;
		return ;
	}
	else if (this->Hit + amount > 10)
	{
		std::cout << this->Name << " can't be repaired because he is full life." << std::endl;
		return ;
	}
	this->Hit += amount;
	this->EnergyPoints	-= 1;
	std::cout << this->Name << " has " << this->Hit << " health points." << std::endl;
}