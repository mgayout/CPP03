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
	ClapTrap a("Michel");
	ClapTrap b("Henry");
	ScavTrap c("Bob");

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
}
