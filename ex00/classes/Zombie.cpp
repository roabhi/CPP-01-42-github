/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:42:33 by rabril-h          #+#    #+#             */
/*   Updated: 2023/09/30 15:22:05 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.h"

Zombie::Zombie(std::string name) : _name(name) {
  return ;
}

Zombie::~Zombie() {

  std::cout << "Zombie " << this->_name << " was destroyed" << std::endl;

  return ;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}