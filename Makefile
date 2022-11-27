SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c

OBJS = $(SRC:.c=.o)

OBJSBONUS = $(SRCBONUS:.c=.o)

GCC = gcc -Wall -Werror -Wextra

RM  = rm -f

NAME = libft.a

ifdef MAKEBONUS
    OBJS = $(OBJSBONUS)
endif

all: $(NAME)

.c.o:
	$(GCC) -I ./ -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

bonus:
			@make MAKEBONUS=1 all

clean:
			$(RM) $(OBJS) $(OBJSBONUS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME) 
			
.PHONY: all clean fclean re bonus