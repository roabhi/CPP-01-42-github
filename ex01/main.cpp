/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:56:00 by rabril-h          #+#    #+#             */
/*   Updated: 2023/09/30 20:31:07 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
    int N;
    int         counter;
    Zombie	    *myZombieHorde;

    N = 10;
    counter = -1;
    myZombieHorde = zombieHorde(N, "Fulanito");    
    while (++counter < N)
        myZombieHorde[counter].announce();        
    delete []myZombieHorde;    
    return (0);
}