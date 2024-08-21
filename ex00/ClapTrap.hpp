/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:26:49 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/19 11:26:49 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
			ClapTrap();
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap& other);
			ClapTrap& operator=(const ClapTrap& other);
			~ClapTrap();
			void	attack(const std::string& target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);

	private:
			std::string		Name;
			unsigned int	Hit;
			unsigned int	EnergyPoints;
			unsigned int	AttackDamage;
};

#endif