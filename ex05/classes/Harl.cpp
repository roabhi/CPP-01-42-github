// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Harl.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2023/10/04 17:45:20 by rabril-h          #+#    #+#             //
//   Updated: 2023/10/04 20:52:27 by rabril-h         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#include "../Harl.h"


Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}


std::string Harl::_levels[] = {	"DEBUG", "INFO", "WARNING", "ERROR"};

void (*Harl::logFnc [])( Harl* pointer ) = {
	Harl::debug,
	Harl::info,
	Harl::warning,
	Harl::error
};


void Harl::complain(std::string level)
{
	int	i = 0;
	while (i < 4 && _levels[i].compare(level))
		i++;
	if (i < 4)
		logFnc[i](this);
	else
		std::cout << level << "\n" << W_LEVEL << std::endl;	
}


void	Harl::debug( Harl* pointer )
{
	pointer->debug();
}

void	Harl::info( Harl* pointer )
{
	pointer->info();
}

void	Harl::warning( Harl* pointer )
{
	pointer->warning();
}

void	Harl::error( Harl* pointer )
{
	pointer->error();
}


void	Harl::debug(void)
{
	std::cout << "DEBUG" << std::endl;
	std::cout << DEBUG << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO" << std::endl;
	std::cout << INFO << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING" << std::endl;
	std::cout << WARNING << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR" << std::endl;
	std::cout << ERROR << std::endl;
}
