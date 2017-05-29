NAME = libvect.a
SRC = add.c vect_add.c vect_cmp.c vect_del.c vect_err.c vect_grow.c vect_init.c vect_memcmp.c vect_memmem.c vect_mset.c vect_mset_end.c vect_push.c vect_req.c
OBJ = $(SRC:.c=.o)

CFLAGS += -g -Wall -Wextra -Werror
ARFLAGS = rc

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $(OBJ)

clean:
	@rm $(OBJ) 2> /dev/null || true

fclean: clean
	@rm $(NAME) 2> /dev/null || true

re: fclean all
