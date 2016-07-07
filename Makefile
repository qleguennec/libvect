# Directories
PROJECT		=	libvect
BINDIR		?=	.
BUILDDIR	?=	build
NAME		=	$(BINDIR)/libvect.a

# Compiler options
CC			=	clang
CFLAGS		=	$(addprefix -I,$(INCLUDE)) -Wall -Wextra -Werror -g

# Color output
BLACK		=	"\033[0;30m"
RED			=	"\033[0;31m"
GREEN		=	"\033[0;32m"
YELLOW		=	"\033[1;33m"
BLUE		=	"\033[0;34m"
MAGENTA		=	"\033[0;35m"
CYAN		=	"\033[0;36m"
WHITE		=	"\033[0;37m"
END			=	"\033[0m"

SRC += vect_add.c
SRC += vect_addstr.c
SRC += vect_debug.c
SRC += vect_del.c
SRC += vect_getstr.c
SRC += vect_grow.c
SRC += vect_init.c
SRC += vect_mset.c
SRC += vect_mset_end.c
SRC += vect_print.c
SRC += vect_push.c
SRC += vect_pushstr.c
SRC += vect_req.c
SRC += vect_wrap.c

OBJECTS		=	$(addprefix $(BUILDDIR)/, $(SRC:%.c=%.o))

all: $(NAME)

$(BUILDDIR)/%.o: %.c
	@[ -d $(BUILDDIR) ] || mkdir $(BUILDDIR)
	@printf $(YELLOW)$(PROJECT)$(END)'\t'
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	@printf $(YELLOW)$(PROJECT)$(END)'\t'
	@ar rc $(@) $(OBJECTS)
	@echo OK

.PHONY: clean fclean re

clean:
	@printf $(YELLOW)$(PROJECT)$(END)'\t'
	rm -rf build/

fclean: clean
	@printf $(YELLOW)$(PROJECT)$(END)'\t'
	rm -rf $(NAME)

re: fclean all
