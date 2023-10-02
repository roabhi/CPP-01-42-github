/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:55:18 by rabril-h          #+#    #+#             */
/*   Updated: 2023/10/02 18:50:33 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.h"

int  main(int argc, char *argv[])
{
    std::string filename;
    std::string s1;
    std::string s2;
    
    (void)argv;
    if (argc != 4)
        std::cout << "Wrong argument number. Usage -> \"./Sed filename \"string1\" \"string2\" \"" << std::endl;
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];

    return (0);

}
