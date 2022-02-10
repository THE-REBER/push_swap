/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mass_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:18:02 by hmanilow          #+#    #+#             */
/*   Updated: 2022/02/10 18:18:02 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	ft_swap_integer(int *x, int *y)
{
	int	faq;

	faq = *x;
	*x = *y;
	*y = faq;
}

int	*mas_sorting(int argc, char **argv)
{
	int	j;
	int	*mas;
	int	i;

	i = 1;
	j = 0;
	mas = malloc(sizeof(int) * (argc - 1));
	if (mas == NULL)
		return (NULL);
	while (i < argc)
		ft_atoi(argv[i++], &mas[j++]);
	i = 0;
	while (i != argc -1)
	{
		j = 0;
		while (j != argc - 2)
		{
			if (mas[j] > mas[j + 1])
				ft_swap_integer(&mas[j], &mas[j + 1]);
			j++;
		}
		i++;
	}
	return (mas);
}
