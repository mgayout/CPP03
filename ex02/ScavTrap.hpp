/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:00:22 by mgayout           #+#    #+#             */
/*   Updated: 2024/08/19 13:00:22 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
			ScavTrap();
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap& other);
			ScavTrap& operator=(const ScavTrap& other);
			~ScavTrap();

			void	guardGate();
};

#endif