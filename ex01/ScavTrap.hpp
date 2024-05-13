/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:22:26 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 20:22:27 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <string>
# include "ClapTrap.hpp"


class ScavTrap: public ClapTrap {

	public:
					ScavTrap(void);
					ScavTrap(std::string name);
					~ScavTrap(void);
					ScavTrap(const ScavTrap& obj);
		ScavTrap&	operator=(const ScavTrap& obj);
		void		attack(const std::string& target);
		void		guardGate(void);
};

#endif