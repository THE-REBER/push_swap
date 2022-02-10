/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:18:48 by hmanilow          #+#    #+#             */
/*   Updated: 2022/02/10 18:18:48 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_print_error(char *str)
{
	if (!str)
		ft_putendl_fd("Error", 2);
	else
	{
		ft_putendl_fd("Error", 2);
		ft_putendl_fd(str, 2);
	}
	exit(1);
}

int	ft_size_of_stack(t_list *a)
{
	int	i;

	i = 0;
	if (!a)
		return (0);
	while (a)
	{
		a = a->next;
		i++;
	}
	return (i);
}

void	ft_print_a(t_list *a, char *str)
{
	ft_putstr_fd(str, 1);
	if (!a)
		ft_putendl_fd("Empty", 1);
	while (a)
	{
		ft_putnbr_fd(a->number, 1);
		if (a->next)
			ft_putstr_fd(", ", 1);
		else
			ft_putendl_fd("", 1);
		a = a->next;
	}
}

void	pst(t_grenade *s_grenader_Vinnie)
{
	ft_print_a(s_grenader_Vinnie->s_a, "A: ");
	ft_print_a(s_grenader_Vinnie->s_b, "B: ");
}
