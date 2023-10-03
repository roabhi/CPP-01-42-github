/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileStringReplacer.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:55:01 by rabril-h          #+#    #+#             */
/*   Updated: 2023/10/03 16:12:03 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileStringReplacer.hpp"

FileStringReplacer::FileStringReplacer(void)
{
    this->_result = "";
    
    return ;
}


FileStringReplacer::~FileStringReplacer(void)
{
    return ;
}

int FileStringReplacer::writeFile()
{
   
    
    
    std::string outputFilename = this->_filename.append(".replace");
	std::ofstream myfile;
	myfile.open (outputFilename, std::ios::out | std::ios::trunc);
	if (!myfile.is_open())
	{
		std::cerr << "Error" << std::endl;
		std::cerr << "file: " << outputFilename << " could not be opened to write";
		std::cerr << std::endl;
		return (-1);
	}	
	myfile << this->_result;
	myfile.close();
	return (0);
}

int FileStringReplacer::replaceString()
{
    size_t findLen = this->_s1.length();
	size_t contentLen = this->_result.length();
	size_t i;
	std::string result("");
	i = 0;
	while (i < contentLen)
	{
		if (this->_result.substr(i, findLen) == _s1)
		{
			result += _s2;
			i+= findLen;
		}
		else
		{
			result += this->_result[i];
			i++;
		}
	}
	this->_result = result;
	return (0);
}


int FileStringReplacer::readInput()
{
    std::string line;
	std::ifstream myfile;
	myfile.open (this->_filename, std::ios::in);
	if (!myfile.is_open())
	{
		std::cerr << "Error" << std::endl;
		std::cerr << "file: " << this->_filename << " could not be opened to read";
		std::cerr << std::endl;
		return (-1);
	}
	while (std::getline (myfile, line))
		_result += line + "\n";
	myfile.close();
	return (0);
}

int FileStringReplacer::run(std::string filename, std::string s1, std::string s2) 
{
    int success;
    
    this->_filename = filename;
    this->_s1 = s1;
    this->_s2 = s2;

     std::cout << "filename from run is " << this->_filename << std::endl;
    
    // success = this->readInput();
    // if (success < 0)
    //     return success;
    // success = this->replaceString();
    // if (success)
    //     return (success);
    // return (writeFile());
}


