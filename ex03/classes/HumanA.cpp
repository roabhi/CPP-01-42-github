/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:45:02 by rabril-h          #+#    #+#             */
/*   Updated: 2023/10/02 17:39:12 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
  return ;
}

HumanA::~HumanA(void)
{
  return ;
}

void  HumanA::setName(std::string name)
{
  this->_name = name;
}

std::string HumanA::getName(void)
{
  return this->_name;
}

void  HumanA::setWeapon(Weapon &weapon)
{
  this->_weapon = weapon;
}

Weapon HumanA::getWeapon(void)
{
  return (this->_weapon);
}

void  HumanA::attack(void)
{
  std::cout << this->getName() << " attacks with their " << getWeapon().getType() << std::endl;
}