#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

# include "../Libft/libft.h"
# include "../include/get_next_line.h"

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_grenader_Vinnie
{
	t_list	*s_a;
	t_list	*s_b;
	size_t	length_a;
	size_t	length_b;
	int		*mas;
}	t_grenade;

int		ft_size_of_stack(t_list *a);
void	ft_print_a(t_list *a, char *str);
int		is_it_num(char *str);
void	pst(t_grenade *s_grenader_Vinnie);
void	rrr_ra_rb(t_list **a, t_list **b, char *str);
void	rr_ra_rb(t_list **a, t_list **b, char *str);
size_t	max_index(t_list *s_s, t_grenade *s_grenader);
void	assigned_right_ind(t_list *s_s, t_grenade *s_grenader);
void	normal_sorting(t_grenade *s_grenader);
void	ss(t_list **boom_a, t_list **boom_b, char *str);
void	ft_push(t_list **first, t_list **second, char *str);
int		find_minimum(t_grenade *s_grenader);
void	pushin_min(t_grenade *s_grenader, int argc);
void	ft_sort_5(t_grenade *s_grenader, int argc);
void	ft_swap(t_list **boom, char *str);
void	ft_reverse_rotate(t_list **arr, char *str);
void	ft_sort_3(t_list **a);
void	ft_rotate(t_list **arr, char *str);
void	valid(int argc, char **argv, t_grenade *s_grenader);
int		*mas_sorting(int argc, char **argv);
int		check_sort(t_list **a);
int		check_dublicate(t_list **a, int y);
void	ft_print_error(char *str);
void	struct_initialization(t_grenade *s_grenader_Vinnie);
void	another_one(int argc, char **argv, t_grenade *s_grenader_Vinnie);
void	gnl_orders(char *buffer, t_grenade *s_grenader);
void	another_one_bonus(int argc, char **argv, t_grenade *s_grenader_Vinnie);

#endif
