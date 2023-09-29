/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:37:47 by rabril-h          #+#    #+#             */
/*   Updated: 2023/09/29 15:56:20 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
  Zombie	*myZombie = newZombie("Pepito");
	myZombie->announce();

	randomChump("Fulanito");
	randomChump("Menganito");
	delete	myZombie;
  
  return (0);
}