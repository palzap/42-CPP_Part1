# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/02 12:26:28 by pealexan          #+#    #+#              #
#    Updated: 2023/05/10 14:30:21 by pealexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

#----------DIRS----------#

SRC =	megaphone.cpp

#--------COMMANDS--------#
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf

#OBJ = ${SRC:.cpp=.o}

#---------RULES---------#

all: 		$(NAME)

$(NAME): 	
			$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
			@$(RM) $(OBJ) $(BONUS_OBJ)

fclean: 	clean
			@$(RM) $(NAME)

re: fclean all
