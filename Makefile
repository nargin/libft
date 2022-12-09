SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

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
