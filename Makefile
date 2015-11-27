CC = gcc

NAME = eval-expr

RM = rm -rf
MKDIR = mkdir -p

CFLAGS += -I./$(INC_PATH)
CFLAGS += -Wall -Wextra -W

SRC_PATH = src
SRC = eval_expr.c \
	main.c \
	number.c \
	op_high.c \
	op_low.c \
	path.c \
	read_functions.c \
	remove_spaces.c

OBJ_PATH = obj
OBJ = $(SRC:%.c=$(OBJ_PATH)/%.o)

INC_PATH = inc
INC = eval_expr.h \
	read_functions.h \
	remove_spaces.h

DEP = $(patsubst %,$(INC_PATH)/%,$(INC))

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(DEP)
	@$(MKDIR) $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ_PATH)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re fclean clean all
