NAME = test
SRC = $(filter %.c, $(shell ls))
OBJ = $(SRC:.c=.o)
LIB = libft/libft.a liblst/liblst.a

INCS +=
CFLAGS += -g -Wall -Wextra -Werror $(INCS)
LDLIBS += -llst -lft
LOADLIBES += -Llibft -Lliblst
LDFLAGS += -g

all: $(LIB) $(NAME)

$(NAME): $(OBJ)

%.a:
	make -C $(shell echo $*.a | sed 's/\// /')

clean:
	@rm $(OBJ) 2> /dev/null || true

fclean: clean
	@rm $(NAME) 2> /dev/null || true

re: fclean all

.PHONY: all clean fclean re
