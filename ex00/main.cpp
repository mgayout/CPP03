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

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	a;
	ClapTrap	b("Michel");
	ClapTrap	c(b);
	ClapTrap	d("Henry");
	int			i;

	b.attack("Tom");
	b.attack("Henry");
	a.takeDamage(1);
	d.takeDamage(1);
	d.takeDamage(100);
	a.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(10);
	b.beRepaired(1);
	i = -1;
	while (++i != 10)
		c.attack("Bob");
	c.beRepaired(100);
	c.attack("Bob");
}

