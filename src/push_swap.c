/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:18:23 by hmanilow          #+#    #+#             */
/*   Updated: 2022/02/10 18:18:24 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

void	another_one(int argc, char **argv, t_grenade *s_grenader_Vinnie)
{
	if (argc > 2)
	{
		struct_initialization(s_grenader_Vinnie);
		valid(argc, argv, s_grenader_Vinnie);
		s_grenader_Vinnie->mas = mas_sorting(argc, argv);
		if (argc == 3)
			ft_rotate(&s_grenader_Vinnie->s_a, "ra");
		else if (argc == 4)
			ft_sort_3(&s_grenader_Vinnie->s_a);
		else if (argc == 5 || argc == 6)
			ft_sort_5(s_grenader_Vinnie, argc);
		else if (argc > 6)
			normal_sorting(s_grenader_Vinnie);
	}
}

int	main(int argc, char **argv)
{
	int			i;
	char		*s;
	t_grenade	s_grenader_vinnie;

	if (argc == 1)
		ft_print_error("Empty input");
	if (argc == 2)
	{
		s = "s ";
		argv[1] = ft_strjoin(s, argv[1]);
		argv = ft_split(argv[1], ' ');
		if (argv[0] == NULL)
			exit(0);
		i = 1;
		argc = 1;
		while (argv[i])
		{
			is_it_num(argv[i]);
			argc++;
			i++;
		}
	}
	another_one(argc, argv, &s_grenader_vinnie);
	getchar();
}
