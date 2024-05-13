/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:22:54 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 20:27:46 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void){

	this->_name = "UnSet";
}

DiamondTrap::DiamondTrap(std::string name){

	this->_name = name;
	ClapTrap::change_name (name + "_clap_name");
	FragTrap::change_hit (100);
	ScavTrap::change_energy (50);
	FragTrap::change_damage (30);
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj): ClapTrap(obj.get_name()), FragTrap(obj), ScavTrap(obj) {

}

DiamondTrap::~DiamondTrap(void){

	std::cout << "Diamond " << _name << " destoryed!!\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &obj) {

    if (this != &obj) {

        ClapTrap::operator=(obj);
        this->_name = obj._name;
    }
    return *this;
}

void					DiamondTrap::attack(std::string name){

	ScavTrap::attack (name);
}

void					DiamondTrap::whiAmI(void){

	std::cout << "My name: " << this->_name << " My father's name: " << ClapTrap::get_name() << std::endl;
}
