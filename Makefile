NAME = libasm.a
SRC =	ft_strlen.s\
		ft_strcpy.s\
		ft_strcmp.s\
		ft_write.s
FLAGS = -fmacho64
OBJ = $(SRC:.s=.o)
REMOVE = rm -f
AR = ar rcs
TEST = test
HEADER = libasm.h

all:	$(NAME)

$(NAME): $(OBJ)
		$(AR) $(NAME) $(OBJ)

%.o: %.s
		nasm $(FLAGS) $< -o $@

clean:
		$(REMOVE) $(OBJ)

fclean: clean
		$(REMOVE) $(NAME) $(TEST)

re: fclean all

test: $(NAME) $(HEADER)
		gcc main.c -L. -lasm -o $@