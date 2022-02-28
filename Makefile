NAME = libft.a

SRCS =	checkers/ft_isdigit.c													\
		memory_manipulation/ft_memset.c											\
		checkers/ft_isprint.c													\
		string_manipulation/ft_strlcat.c										\
		converters/ft_atoi.c													\
		general_purpose/ft_putchar_fd.c											\
		general_purpose/ft_putstr_fd.c											\
		string_manipulation/ft_strlcpy.c										\
		char_manipulation/ft_tolower.c											\
		memory_manipulation/ft_bzero.c											\
		memory_manipulation/ft_memccpy.c										\
		string_manipulation/ft_strlen.c											\
		char_manipulation/ft_toupper.c											\
		memory_manipulation/ft_calloc.c											\
		memory_manipulation/ft_memchr.c											\
		checkers/ft_isalnum.c													\
		general_purpose/ft_putendl_fd.c											\
		memory_manipulation/ft_memcmp.c											\
		string_manipulation/ft_strncmp.c										\
		checkers/ft_isalpha.c													\
		memory_manipulation/ft_memcpy.c											\
		string_manipulation/ft_strchr.c											\
		string_manipulation/ft_strnstr.c										\
		checkers/ft_isascii.c													\
		memory_manipulation/ft_memmove.c										\
		string_manipulation/ft_strdup.c											\
		string_manipulation/ft_strrchr.c										\
		general_purpose/ft_putnbr_fd.c											\
		string_manipulation/ft_substr.c											\
		string_manipulation/ft_strjoin.c										\
		string_manipulation/ft_strtrim.c										\
		string_manipulation/ft_strmapi.c										\
		converters/ft_itoa.c													\
		string_manipulation/ft_split.c											\
		linked_list/ft_lstdel_last.c											\
		converters/ft_atoli.c													\
		general_purpose/ft_gnl.c												\
		memory_manipulation/ft_free_matrix.c									\
		string_manipulation/ft_split.c											\
		memory_manipulation/ft_realloc.c										\
		linked_list/ft_lstnew.c													\
		linked_list/ft_lstadd_front.c											\
		linked_list/ft_lstsize.c												\
		linked_list/ft_lstlast.c												\
		linked_list/ft_lstadd_back.c											\
		linked_list/ft_lstdelone.c												\
		linked_list/ft_lstclear.c												\
		linked_list/ft_lstiter.c												\
		linked_list/ft_lstmap.c														
		

OBJS = ${SRCS:.c=.o}

INCLUDES = -Iincludes

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} ${INCLUDES} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

all: ${NAME} ${OBJS}

re:		fclean all
