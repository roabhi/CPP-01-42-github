/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:43:48 by rabril-h          #+#    #+#             */
/*   Updated: 2023/10/02 17:45:11 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./classes/HumanA.hpp"
#include "./classes/HumanB.hpp"
#include "./classes/Weapon.hpp"

int main(void)
{
  {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
  }
  {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
  }  
  return (0);
}