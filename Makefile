

NAME	= fillit

SRC		= ./src/main.c  \
		  ./src/check.c \
		  ./src/read.c  \
		  ./src/ft_strsub.c \
		  ./src/ft_memset.c \
		  ./src/ft_strlen.c \
		  ./src/ft_strnew.c \

OBJ		= $(SRC:.c=.o)

INCLUDE = ./includes

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -I./$(INCLUDE) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -I$(INCLUDE)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
