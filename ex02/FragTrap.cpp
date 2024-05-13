/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:22:33 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 20:25:58 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void){

	std::cout << "[FragTrap] Constructor Called!\n";
}

FragTrap::FragTrap(std::string name): ClapTrap(name){

	this->change_hit(100);
	this->change_energy(100);
	this->change_damage(30);
	std::cout << "[FragTrap] Constructor(string) Called!\n";
}

FragTrap::FragTrap(const FragTrap &obj): ClapTrap(obj.get_name()){

	this->change_hit(obj.get_hit());
	this->change_energy(obj.get_energy());
	this->change_damage(obj.get_damage());
	std::cout << "[FragTrap] Copy Constructor Called!\n";
}

FragTrap::~FragTrap(void){

	std::cout << "[FragTrap] Destructor Called!\n";
}

FragTrap&			FragTrap::operator=(const FragTrap &obj){

	this->change_name(obj.get_name());
	this->change_hit(obj.get_hit());
	this->change_energy(obj.get_energy());
	this->change_damage(obj.get_damage());
	std::cout << "[FragTrap] Operator= Called!\n";
	return *this;
}

void				FragTrap::highFivesGuys(void){

	std::cout << "Give me five!!!\n";
}