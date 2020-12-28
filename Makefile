NAME = libasm.a
SRC = ft_strlen.s
FLAGS = -fmacho64
OBJ = $(SRC:.s=.o)
REMOVE = rm -f
AR = ar rcs
TEST = test

all:	$(NAME)

$(NAME): $(OBJ)
		$(AR) $(NAME) $(OBJ)

%.o: %.s
		nasm $(FLAGS) $(SRC) -o $@

clean:
		$(REMOVE) $(OBJ)

fclean: clean
		$(REMOVE) $(NAME) $(TEST)

re: fclean all

test: $(NAME)
		gcc main.c -L. -lasm -o $@