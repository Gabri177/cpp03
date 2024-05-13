/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:23:02 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 20:23:03 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>

class FragTrap: virtual public ClapTrap {

	public:
							FragTrap(void);
							FragTrap(std::string name);
							FragTrap(const FragTrap &obj);
							~FragTrap(void);
		FragTrap&			operator=(const FragTrap &obj);
		void				highFivesGuys(void);
};
#endif