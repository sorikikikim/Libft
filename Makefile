CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar rc
NAME = libft.a
HEADER = libft.h
BSRCS = $(wildcard *lst*.c)
BOBJS = $(BSRCS:.c=.o)
SRCS = $(filter-out $(BSRCS),$(wildcard *.c))
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $@ $^

bonus : $(BOBJS) $(OBJS)
	$(AR) $(NAME) $^

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS) $(BOBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
