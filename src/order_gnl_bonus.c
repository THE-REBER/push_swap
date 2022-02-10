/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_gnl_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:18:15 by hmanilow          #+#    #+#             */
/*   Updated: 2022/02/10 18:18:16 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	gnl_orders(char *buffer, t_grenade *s_grenader)
{
	if (!ft_strncmp(buffer, "sa\n", 4))
		ft_swap(&s_grenader->s_a, NULL);
	else if (!ft_strncmp(buffer, "sb\n", 4))
		ft_swap(&s_grenader->s_b, NULL);
	else if (!ft_strncmp(buffer, "ss\n", 4))
		ss(&s_grenader->s_a, &s_grenader->s_b, NULL);
	else if (!ft_strncmp(buffer, "pa\n", 4))
		ft_push(&s_grenader->s_b, &s_grenader->s_a, NULL);
	else if (!ft_strncmp(buffer, "pb\n", 4))
		ft_push(&s_grenader->s_a, &s_grenader->s_b, NULL);
	else if (!ft_strncmp(buffer, "ra\n", 4))
		ft_rotate(&s_grenader->s_a, NULL);
	else if (!ft_strncmp(buffer, "rb\n", 4))
		ft_rotate(&s_grenader->s_b, NULL);
	else if (!ft_strncmp(buffer, "rr\n", 4))
		rr_ra_rb(&s_grenader->s_a, &s_grenader->s_b, NULL);
	else if (!ft_strncmp(buffer, "rra\n", 4))
		ft_reverse_rotate(&s_grenader->s_a, NULL);
	else if (!ft_strncmp(buffer, "rrb\n", 4))
		ft_reverse_rotate(&s_grenader->s_b, NULL);
	else if (!ft_strncmp(buffer, "rrr\n", 4))
		rrr_ra_rb(&s_grenader->s_a, &s_grenader->s_b, NULL);
	else
		ft_print_error(NULL);
}
