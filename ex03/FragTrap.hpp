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