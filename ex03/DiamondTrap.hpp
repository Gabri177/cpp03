/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:22:57 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 20:22:58 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {

	private:
		std::string				_name;
	
	public:
								DiamondTrap(void);
								DiamondTrap(std::string name);
								DiamondTrap(const DiamondTrap &obj);
								~DiamondTrap(void);
		DiamondTrap&			operator=(const DiamondTrap &obj);
		void					attack(std::string name);
		void					whiAmI(void);
};
#endif