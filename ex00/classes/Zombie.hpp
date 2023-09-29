/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:33:22 by rabril-h          #+#    #+#             */
/*   Updated: 2023/09/29 15:42:22 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "../Zombie.h"

class Zombie {

    public:

      Zombie(void);
      ~Zombie(void);
      Zombie(std::string name);
      void  announce(void);

    private:

      std::string _name;

};

#endif