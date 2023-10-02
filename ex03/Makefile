# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 11:13:35 by rabril-h          #+#    #+#              #
#    Updated: 2023/10/02 12:06:38 by rabril-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Violence

SRCS = main.cpp ./classes/Weapon.cpp ./classes/HumanA.cpp ./classes/HumanB.cpp

HEADER = Weapon.h ./classes/Weapon.hpp ./classes/HumanA.h ./classes/HumanA.hpp ./classes/HumanB.h ./classes/HumanB.hpp

CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

%.o: %.cpp Makefile ${HEADER}
		@${CC} ${CFLAGS} -c $< -o $@

OBJS = ${SRCS:.cpp=.o}
DEPS = ${SRCS:.cpp=.d}


${NAME}:: ${OBJS}
	@${CC} $(CFLAGS) $(OBJS) -o ${NAME}
	@echo "All files compiled"


all:
		@$(MAKE) ${NAME} 

-include ${DEPS}		

clean:
			@${RM} ${OBJS} ${DEPS}
			@echo "Objects cleaned"

fclean: clean 
			@${RM} ${OBJS} ${DEPS} ${NAME}
			@echo "All compilation files removed"

re: 
			@$(MAKE) fclean 
			@$(MAKE) all 


.PHONY: all clean fclean re