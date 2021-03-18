CC = gcc
FLAGS = -Wall -Wextra -Werror
TARGET = libft.a
SRCDIR = srcs/
HEADER = includes/
SOURCES = $(SRCDIR)ft_putchar.c $(SRCDIR)ft_putstr.c $(SRCDIR)ft_strcmp.c $(SRCDIR)ft_strlen.c $(SRCDIR)ft_swap.c
OBJS = $(SOURCES:.c=.o)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@ -I $(HEADER)

$(TARGET) : $(OBJS)
	ar rc $@ $(OBJS)

all : $(TARGET)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all

.PHONY: all clean fclean re
