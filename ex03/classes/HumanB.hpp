/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:55:27 by rabril-h          #+#    #+#             */
/*   Updated: 2023/10/02 12:10:30 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "HumanB.h"

class HumanB
{
	public:

		  HumanB(std::string name);
		  ~HumanB(void);
		  void attack(void);
		  void setName(std::string name);
		  void setWeapon(Weapon &weapon);
		  std::string getName(void);
		  Weapon getWeapon(void);

	private:
		  
      std::string _name;
		  Weapon *_weapon;
};


#endif