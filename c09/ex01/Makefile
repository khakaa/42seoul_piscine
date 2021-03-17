CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = libft.a

SRCDIR = ./srcs/
HEADER = ./includes/

OPTION = -c -I $(HEADER)

SOURCES = $(SRCDIR)ft_putchar.c $(SRCDIR)ft_putstr.c $(SRCDIR)ft_strcmp.c $(SRCDIR)ft_strlen.c $(SRCDIR)ft_swap.c
OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(FLAGS) $(OPTION) $(SOURCES)
	ar rc $@ $(OBJS)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all
