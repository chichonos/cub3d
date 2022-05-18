NAME = cub3d
LIBFT = libft.a
SRCS = main.c
OBJ = ${SRCS:.c=.o}
CFLAGS = -Wall -Werror -Wextra
DEBUG = #-g -fsanitize=address
INCLUDES = ./includes


# Colors
NONE='\033[0m'
GREEN='\033[32m'
YELLOW='\033[33m'
GRAY='\033[2;37m'
CURSIVE='\033[3m'


$(NAME): $(LIBFT) $(OBJ)
	@echo $(YELLOW)"Compiling cub3d." $(NONE)
	$(CC) $(DEBUG) $(OBJ) $(CFLAGS) -lmlx -framework OpenGL -framework AppKit -o $(NAME)
	@echo $(GREEN)"Done." $(NONE)

$(LIBFT):
	@echo $(YELLOW)"Compiling libft." $(NONE)
	@make -sC ./libft
	@echo $(GREEN)"Done." $(NONE)

all: $(NAME)

%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -Iincludes -o $@

clean :
	@echo $(YELLOW)"Cleaning .o files" $(NONE)
	@rm -rf ${OBJ}
	@echo $(CURSIVE)"All *.o files deleted." $(NONE)

fclean : clean
		@${MAKE} -C ./libft fclean
		@rm -rf libft.a
		@rm -rf ${NAME}
		@echo $(GREEN)"Everything is fine now." $(NONE)
	
re: fclean all


.PHONY: all clean fclean re
.SILENT: