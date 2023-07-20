NAME = libft.a
SRC_FILES_LIBFT =	is/ft_isalpha.c is/ft_isdigit.c is/ft_isalnum.c is/ft_isascii.c is/ft_isprint.c\
					str/ft_strlen.c str/ft_strchr.c str/ft_strrchr.c str/ft_strncmp.c str/ft_strnstr.c str/ft_atoi.c\
					chnstr/ft_strlcpy.c chnstr/ft_strlcat.c chnstr/ft_toupper.c chnstr/ft_tolower.c chnstr/ft_striteri.c\
					mem/ft_bzero.c mem/ft_memcpy.c mem/ft_memmove.c mem/ft_memset.c mem/ft_memchr.c mem/ft_memcmp.c\
					crtstr/ft_calloc.c crtstr/ft_strdup.c crtstr/ft_substr.c crtstr/ft_strjoin.c crtstr/ft_strtrim.c crtstr/ft_split.c crtstr/ft_itoa.c crtstr/ft_strmapi.c\
					fd/ft_putchar_fd.c fd/ft_putstr_fd.c fd/ft_putendl_fd.c fd/ft_putnbr_fd.c\
					lst/ft_lstnew_bonus.c lst/ft_lstadd_front_bonus.c lst/ft_lstsize_bonus.c lst/ft_lstlast_bonus.c lst/ft_lstadd_back_bonus.c lst/ft_lstdelone_bonus.c lst/ft_lstclear_bonus.c lst/ft_lstiter_bonus.c lst/ft_lstmap_bonus.c
OBJFILES = $(SRC_FILES_LIBFT:%.c=obj/%.o)
OBJDIR = obj
DIRECTORIES = obj obj/is obj/str obj/chnstr/ obj/mem obj/crtstr/ obj/fd obj/lst
CFLAGS ?= -Wall -Wextra -Werror
CC = cc
LIGHTGREEN=\033[1;32m
EXIT=\033[0m
DIM=\033[2m
YELLOW=\033[1;33m

all: $(NAME)

$(NAME): $(OBJFILES)
	@ar -csr $@ $^
	@echo " ${LIGHTGREEN}+-+-+-+-+-+-+";
	@echo " |S|u|c|c|e|s|";
	@echo " +-+-+-+-+-+-+${EXIT}";

obj/%.o: src/%.c $(OBJDIR)
	@$(CC) -iquote includes -c $(CFLAGS) -o $@ $<

$(OBJDIR):
	@echo " $(LIGHTGREEN)+-+-+-+-+-+-+-+-+-+  +-+-+-+-+-+";
	@echo " |C|o|m|p|i|l|i|n|g|  |l|i|b|f|t|";
	@echo " +-+-+-+-+-+-+-+-+-+  +-+-+-+-+-+$(EXIT)";
	@echo "$(DIM)\n...\n$(EXIT)"
	@mkdir $(DIRECTORIES)

clean:
	@echo " $(YELLOW)+-+-+-+-+-+-+-+-+  +-+-+-+  +-+-+-+-+-+";
	@echo " |C|l|e|a|n|i|n|g|  |o|b|j|  |f|i|l|e|s|";
	@echo " +-+-+-+-+-+-+-+-+  +-+-+-+  +-+-+-+-+-+$(EXIT)";
	@rm -rf $(OBJDIR)

fclean: clean
	@echo "\n $(YELLOW)+-+-+-+-+-+-+-+-+  +-+-+-+-+-+";
	@echo " |D|e|l|e|t|i|n|g|  |l|i|b|f|t|";
	@echo " +-+-+-+-+-+-+-+-+  +-+-+-+-+-+$(EXIT)";
	@rm -f $(NAME)

re: fclean
	@echo "\n"
	@$(MAKE) all

.PHONY: all fclean clean re
