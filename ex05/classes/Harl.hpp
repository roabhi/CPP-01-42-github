// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Harl.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2023/10/04 17:40:11 by rabril-h          #+#    #+#             //
//   Updated: 2023/10/04 20:58:57 by rabril-h         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HARL_HPP
# define HARL_HPP


class Harl{

public:
	
	Harl(void);
	~Harl(void);
	void complain(std::string level);

	protected:
		  
	static void				debug( Harl* pointer );
	static void				info( Harl* pointere );
	static void				warning( Harl* pointer );
	static void				error( Harl* pointer );

	private:
		  static std::string _levels[4];
		  static void	(*logFnc [4])( Harl* pointer );
		  void debug();
		  void info();
		  void warning();
		  void error();
};

#endif
