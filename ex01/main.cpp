/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:26:29 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/19 11:26:29 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap john("John");
	ClapTrap jim("Jim");
	ClapTrap joe("Joe");
	ScavTrap jane("Jane");

	john.attack("Marge");
	john.attack("Bart");
	john.attack("Homer");
	john.takeDamage(5);
	jim.takeDamage(9);
	jim.takeDamage(10);
	joe.beRepaired(10);
	joe.takeDamage(19);
	jane.attack("Lisa");
	jane.takeDamage(99);
	jane.beRepaired(50);
	jane.guardGate();
}
