CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME_S = server
NAME_C = client

SRC = printf/ft_printf.c \
			printf/ft_putaddr.c \
			printf/ft_putchar.c \
			printf/ft_puthex.c \
			printf/ft_putnbr.c \
			printf/ft_putstr.c \
			printf/ft_putunbr.c \
			utils/ft_atoi.c

SRC_S = server.c
SRC_C = client.c

OBJS = $(SRC:.c=.o)
OBJS_S = $(SRC_S:.c=.o)
OBJS_C = $(SRC_C:.c=.o)

all : $(NAME_S) $(NAME_C)

$(NAME_S) : $(OBJS_S) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS_S) $(OBJS) -o $(NAME_S)

$(NAME_C) : $(OBJS_C) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS_C) $(OBJS) -o $(NAME_C)

%.o : %.c minitalk.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -rf $(OBJS) $(OBJS_C) $(OBJS_S)

fclean : clean
	@rm -rf $(NAME_C) $(NAME_S)

re : fclean all