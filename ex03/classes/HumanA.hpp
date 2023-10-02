/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:37:45 by rabril-h          #+#    #+#             */
/*   Updated: 2023/10/02 12:22:43 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_H

# include "Weapon.h"

class HumanA
{
	public:

		  HumanA(std::string name, Weapon &weapon);
		  ~HumanA(void);
		  void attack(void);
		  void setName(std::string name);
		  void setWeapon(Weapon &weapon);
		  std::string getName(void);
		  Weapon getWeapon(void);

	private:
  
		  std::string _name;
		  Weapon &_weapon;
};

#endif