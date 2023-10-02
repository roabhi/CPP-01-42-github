/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:01:43 by rabril-h          #+#    #+#             */
/*   Updated: 2023/09/30 20:21:39 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "../Zombie.h"

class Zombie {
    public :

        Zombie(void);
        ~Zombie(void);
        void            setName(std::string name);
        void            announce(void);
    
    private :

        std::string _name;
};

#endif