/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:45:52 by rabril-h          #+#    #+#             */
/*   Updated: 2023/10/02 12:21:46 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type) : _type(type)
{
  return ;
}

Weapon::~Weapon(void)
{
  return ;
}

void Weapon::setType(std::string type)
{
  this->_type = type;
}

std::string const &Weapon::getType(void)
{
  return (this->_type);
}