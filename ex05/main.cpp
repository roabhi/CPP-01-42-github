// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2023/10/03 21:57:54 by rabril-h          #+#    #+#             //
//   Updated: 2023/10/04 20:39:57 by rabril-h         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#include "Harl.h"
#include "./classes/Harl.hpp"


int main(int argc, char *argv[])
{
	Harl harl;

	if (argc != 2)
	{
		std::cout << W_PARAMS << std::endl;
		return (1);
	}

	harl.complain(argv[1]);

	std::cout << "\n++++++++++++++++++ OWN TEST ++++++++++++++++++\n" << std::endl;

	harl.complain("ERROR");
	harl.complain("INFO");
	harl.complain("DEBUG");
	harl.complain("DEBUG");
	harl.complain("WHATEVER");

	harl.complain("DEBUG");
	harl.complain("WHATEVER");
	harl.complain("ERROR");
	harl.complain("INFO");
	harl.complain("DEBUG");
	harl.complain("ERROR");
	harl.complain("ERROR");

	
	return (0);
}
