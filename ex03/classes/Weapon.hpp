/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:47:56 by rabril-h          #+#    #+#             */
/*   Updated: 2023/10/02 12:20:35 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "Weapon.h"

class Weapon {

    public :

      Weapon(std::string type);
      ~Weapon();
      std::string const &getType(void);
      void              setType(std::string);

    private :

      std::string _type;

};

#endif
