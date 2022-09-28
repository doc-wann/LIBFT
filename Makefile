NAME = libft.a

CC = gcc
CFLAGS = -Werror -Wall -Wextra
AR = ar rcs
RM = rm -f

FILES = ft_isalnum \
	ft_bzero \
	ft_atoi \
	ft_isalpha \
	ft_isascii \
	ft_isdigit \
	ft_isprint \
	ft_strchr \
	ft_strrchr \
	ft_strlen \
	ft_tolower \
	ft_toupper \
	ft_memset \
	ft_memcpy \
	ft_memmove \
	ft_strlcpy \
	ft_strlcat \
	ft_strncmp \
	ft_memchr \
	ft_memcmp \
	ft_strnstr \
	ft_substr \
	ft_strjoin \
	ft_calloc \
	ft_strtrim \
	ft_itoa \
	ft_strmapi \
	ft_split \
	ft_putchar_fd \
	ft_putstr_fd \
	ft_putendl_fd \
	ft_putnbr_fd \
	ft_striteri \
	ft_strdup \

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

.c.o : $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all
