/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:17:35 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/19 14:17:35 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->Hit = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	std::cout << "A new FragTrap has appeared!" << std::endl << this->Name << ": Hi !" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->Hit = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	std::cout << "A new FragTrap has appeared!" << std::endl << this->Name << ": Hi !" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "A new FragTrap has appeared!" << std::endl << this->Name << ": Hi !" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	FragTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap()
{
		std::cout << "FragTrap (" << this->Name << "): Bye Bye ..." << std::endl;
}

void	FragTrap::highFivesGuys()
{
		std::cout << this->Name << "would like to high five everyone!" << std::endl;
}
