NAME = libftprintf.a
SRCFILESUNIVERSAL = flagfunctions.c helperfunctions.c validation.c charconversion.c stringconversion.c  flagvalidate.c\
pointerconversion.c decimalconversion.c unsignedconversion.c hexaconversion.c percentconversion.c
SRCFILESMAN = ft_printf.c
SRCFILESBONUS = ft_printf_bonus.c
OBJFILESUNIVERSAL = $(SRCFILESUNIVERSAL:%.c=obj/%.o)
OBJFILESMAN = $(SRCFILESMAN:%.c=obj/%.o)
OBJFILESBONUS = $(SRCFILESBONUS:%.c=obj/%.o)
CFLAGS = -Wall -Werror -Wextra
library = libft/libft.a
HEADER = ft_printf.h

ifdef WITH_BONUS
OBJFILES = $(OBJFILESUNIVERSAL) $(OBJFILESBONUS)
else
OBJFILES = $(OBJFILESUNIVERSAL) $(OBJFILESMAN)
endif

all: $(library) $(NAME)

$(NAME): $(OBJFILES)
	@cp $(library) $(NAME)
	@ar -rcs $(NAME) $(OBJFILES)

$(library):
	@cd libft && $(MAKE)

obj/%.o: %.c $(HEADER)
	@mkdir -p obj/
	@$(CC) -c $(CFLAGS) -o $@ $<

clean:
	@rm -fr obj/
	@cd libft && $(MAKE) clean

fclean: clean
	@rm -f $(NAME) $(library)

re: fclean all

bonus:
	@$(MAKE) WITH_BONUS=1 all

.PHONY: re fclean clean all bonus