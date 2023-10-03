/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileStringReplacer.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:45:28 by rabril-h          #+#    #+#             */
//   Updated: 2023/10/03 21:14:16 by rabril-h         ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#ifndef FILESTRINGREPLACER_HPP
# define FILESTRINGREPLACER_HPP

# include <string>
# include <iostream>
# include <fstream>

class FileStringReplacer
{
    public:
        FileStringReplacer(void);
        ~FileStringReplacer(void);
        int run(std::string filename, std::string s1, std::string s2);

    private:
        int readInput(); 
        int replaceString(); 
        int	writeFile(); 
        
        std::string _filename;
        std::string _s1; 
        std::string _s2; 
        std::string _result;      
};
#endif
