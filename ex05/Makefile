#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 21:52:40 by rabril-h          #+#    #+#              #
#    Updated: 2023/10/04 18:23:42 by rabril-h         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = Harl

SRCS = main.cpp \
				./classes/Harl.cpp

HEADER = Harl.h \
				./classes/Harl.hpp

CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

%.o: %.cpp Makefile ${HEADERS}
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
