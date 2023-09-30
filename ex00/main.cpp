/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:37:47 by rabril-h          #+#    #+#             */
/*   Updated: 2023/09/30 15:21:21 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
  	Zombie	*myZombie;
  
  	myZombie = newZombie("Pepito");
	myZombie->announce();
	delete	myZombie;
	randomChump("Fulanito");
	randomChump("Menganito");
	
  
  return (0);
}