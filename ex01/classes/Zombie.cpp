/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:43:25 by rabril-h          #+#    #+#             */
/*   Updated: 2023/09/30 20:29:30 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.h"

Zombie::Zombie(){
  return ;
}

Zombie::~Zombie() {

  std::cout << "Zombie " << this->_name << " was destroyed" << std::endl;
  return ;
}

void  Zombie::setName(std::string name)
{
  this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}