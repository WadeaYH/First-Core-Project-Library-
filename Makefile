FILES = main.c \
ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \

Notify: 
	@echo "***Start Compilation***"

all: Notify
	@gcc -Wall -Wextra -Werror $(FILES) -o a.out
	
Run: all
	@./a.out