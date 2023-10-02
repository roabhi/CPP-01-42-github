/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:49:23 by rabril-h          #+#    #+#             */
/*   Updated: 2023/09/30 20:25:06 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie *zombieHorde( int N, std::string name )
{
    Zombie	*zombie = new Zombie[N];


	for (int i = 0; i < N; i++)
	{
		zombie[i].setName(name);
	}
	return (zombie);
}