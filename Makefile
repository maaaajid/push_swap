NAME = push_swap

NAME_BONUS = checker

SRCS_BONUS = ./checker_bonus/checker.c ./checker_bonus/get_next_line.c ./checker_bonus/get_next_line_utils.c ./checker_bonus/put_in_nodes.c ./checker_bonus/argument.c \
	./checker_bonus/check_max_min.c ./checker_bonus/checker_utils.c ./checker_bonus/checker_utils_2.c

SRCS = push_swap.c argument.c check_max_min.c put_in_nodes.c swap.c sort.c duplicate.c \
	sort_tree.c sort_five.c sort_big.c round_2.c swap_2.c

LIBFT = libft.a

LIBFT_DIR = libft/

RM = rm -fr

CFLAGS = -Wall -Wextra -Werror 

all : $(NAME)

$(NAME) : $(SRCS) $(LIBFT)
	@CC $(CFLAGS) $(SRCS) $(LIBFT) -o $(NAME)
	
$(LIBFT) :
	@$(MAKE) -C $(LIBFT_DIR)
	mv libft/libft.a .

bonus : $(NAME_BONUS)

$(NAME_BONUS) : $(SRCS_BONUS) $(LIBFT)
	@CC $(CFLAGS) $(SRCS_BONUS) $(LIBFT) -o $(NAME_BONUS)


clean :
	$(RM) $(NAME) $(NAME_BONUS)

fclean : 
	$(RM) $(NAME_BONUS) $(NAME) $(LIBFT) 
	rm $(LIBFT_DIR)*.o

re : fclean	all