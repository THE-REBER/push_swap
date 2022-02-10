/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:17:58 by hmanilow          #+#    #+#             */
/*   Updated: 2022/02/10 18:17:59 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	another_one_bonus(int argc, char **argv, t_grenade *s_grenader_Vinnie)
{
	char	*order;

	if (argc > 2)
	{
		struct_initialization(s_grenader_Vinnie);
		valid(argc, argv, s_grenader_Vinnie);
		while (1)
		{
			order = get_next_line(0);
			if (order == NULL)
				break ;
			gnl_orders(order, s_grenader_Vinnie);
		}
		if (check_sort(&s_grenader_Vinnie->s_a) && !s_grenader_Vinnie->s_b)
			ft_putendl_fd("OK", 1);
		else
			ft_putendl_fd("KO", 1);
	}
}

int	main(int argc, char **argv)
{
	int			i;
	char		*s;
	t_grenade	s_grenader_vinnie;

	if (argc == 1)
		exit (1);
	if (argc == 2)
	{
		s = "s ";
		argv[1] = ft_strjoin(s, argv[1]);
		argv = ft_split(argv[1], ' ');
		if (argv[0] == NULL)
			exit(1);
		i = 1;
		argc = 1;
		while (argv[i])
		{
			is_it_num(argv[i]);
			argc++;
			i++;
		}
	}
	another_one_bonus(argc, argv, &s_grenader_vinnie);
	exit(0);
}
