/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:55:18 by rabril-h          #+#    #+#             */
/*   Updated: 2023/10/03 15:54:04 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.h"
#include "./classes/FileStringReplacer.hpp"

int  main(int argc, char *argv[])
{
    std::string filename;
    std::string s1;
    std::string s2;
    FileStringReplacer fsr;    
    
       
    (void)argv;
    if (argc != 4)
    {
        std::cout << "Wrong argument number. Usage -> \"./Sed filename \"string1\" \"string2\" \"" << std::endl;
        return (1);
    }
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];

    if (fsr.run(filename, s1, s2) < 0)
        return (1);

    return (0);

}
