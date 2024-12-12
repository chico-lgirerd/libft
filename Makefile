# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 13:41:01 by lgirerd           #+#    #+#              #
#    Updated: 2024/12/12 16:24:48 by lgirerd          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

############################# SOURCES #############################

CONV_DIR = conversion/
CONV_SRCS = ft_atoi.c \
			ft_itoa.c \
			ft_tolower.c \
			ft_toupper.c

FD_DIR = file_desc/
FD_SRCS =   ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c

IS_DIR = is/
IS_SRCS =   ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c

LINKLIST_DIR = linked_lists/
LINKLIST_SRCS = ft_lstadd_back.c \
				ft_lstadd_back.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c

MEMORY_DIR = memory/
MEMORY_SRCS =   ft_bzero.c \
				ft_calloc.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c

STRING_DIR = string/
STRING_SRCS = 	ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c

############################# DIRECTORIES ##############################

SRCS_DIR = srcs/
SRCS =	$(addprefix $(CONV_DIR), $(CONV_SRCS)) \
		$(addprefix $(FD_DIR), $(FD_SRCS)) \
		$(addprefix $(IS_DIR), $(IS_SRCS)) \
		$(addprefix $(LINKLIST_DIR), $(LINKLIST_SRCS)) \
		$(addprefix $(MEMORY_DIR), $(MEMORY_SRCS)) \
		$(addprefix $(STRING_DIR), $(STRING_SRCS)) 

OBJS_DIR = .objs/
OBJS_NAMES = $(SRCS:.c=.o)
OBJS_FOLDER =			$(addprefix $(OBJS_DIR), $(CONV_DIR) \
                        $(FD_DIR) \
                        $(IS_DIR) \
                        $(LINKLIST_DIR) \
                        $(MEMORY_DIR) \
                        $(STRING_DIR))

OBJS = $(addprefix $(OBJS_DIR), $(OBJS_NAMES))

DEPS := $(OBJS:.o=.d)

############################# RULES ##############################

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $(OBJS)

$(OBJS_DIR)%.o:$(SRCS_DIR)%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS_DIR)

fclean :    clean
	      rm -f $(NAME)

re : fclean
	make all

.PHONY :  all clean fclean re
