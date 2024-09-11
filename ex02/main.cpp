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
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap a("Michel");
	ClapTrap b("Henry");
	ScavTrap c("Bob");
	FragTrap d("Alex");

	a.attack("Henry");
	a.takeDamage(5);
	b.beRepaired(5);
	b.takeDamage(9);
	b.takeDamage(10);
	b.beRepaired(10);
	c.attack("Henry");
	c.takeDamage(99);
	c.beRepaired(50);
	c.guardGate();
	d.attack("Henry");
	d.takeDamage(99);
	d.beRepaired(50);
	d.highFivesGuys();
}
