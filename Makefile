# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lstreak <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/30 09:38:19 by lstreak           #+#    #+#              #
#    Updated: 2018/11/30 09:44:09 by lstreak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLEEN_SRC	= Coleen.c

COLEEN_O	= Coleen.o

COLEEN 		= Coleen

GRACE_SRC 	= Grace.c

GRACE_O		= Grace.o

GRACE 		= Grace

SULLY_SRC	= Sully.c

SULLY_O		= Sully.o

SULLY		= Sully

grace:
	gcc -Wall -Werror -Wextra -c $(GRACE_SRC)
	gcc -o $(GRACE) $(GRACE_O)

coleen:
	gcc -Wall -Werror -Wextra -c $(COLEEN_SRC)
	gcc -o $(COLEEN) $(COLEEN_O)

sully:
	gcc -Wall -Werror -Wextra -c $(SULLY_SRC)
	gcc -o $(SULLY) $(SULLY_O)

all: grace coleen sully

clean:
	rm -f $(COLEEN_O)
	rm -f $(GRACE_O)
	rm -f $(SULLY_O)

sullyclean:
	rm -f Sully_*

fclean:
	rm -f $(COLEEN_O)
	rm -f $(GRACE_O)
	rm -f $(SULLY_O)
	rm -f $(GRACE)
	rm -f $(COLEEN)
	rm -f $(SULLY)


re: fclean all
