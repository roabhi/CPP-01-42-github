/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileStringReplacer.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:45:28 by rabril-h          #+#    #+#             */
/*   Updated: 2023/10/02 19:01:44 by rabril-h         ###   ########.fr       */
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
        FileStringReplacer(std::string filename, std::string s1, std::string s2);
        ~FileStringReplacer();
        int	run();

    private:
        int readInput(); // readFile
        int replaceString(); //do replacement
        int	writeFile(); // saveResult
        
        std::string _filename;
        std::string _s1; // _find
        std::string _s2; // _replace
        std::string _result;  // _content      
};

#endif