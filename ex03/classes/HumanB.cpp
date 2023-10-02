/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:57:59 by rabril-h          #+#    #+#             */
/*   Updated: 2023/10/02 12:03:03 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
  return ;
}

HumanB::~HumanB(void)
{
  return ;
}

void HumanB::setName(std::string name)
{
	this->_name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

std::string HumanB::getName(void)
{
	return (this->_name);
}

Weapon HumanB::getWeapon(void)
{
	return (*this->_weapon);
}

void HumanB::attack(void)
{
	if (this->_weapon == NULL)
		std::cout << getName() << " has no weapon" << std::endl;
	else
		std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
}

