/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:31:55 by rabril-h          #+#    #+#             */
/*   Updated: 2023/10/02 10:40:54 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(void)
{
  std::string str;
  
  str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "STR address : " << &str << std::endl;
	std::cout << "PTR address : " << &stringPTR << std::endl;
	std::cout << "REF address : " << &stringREF << std::endl;

	std::cout << "==============================" << std::endl;

	std::cout << "STR value : " << str << std::endl;
	std::cout << "PTR value : " << stringPTR << std::endl;
	std::cout << "REF value : " << stringREF << std::endl;
	return (0);

}