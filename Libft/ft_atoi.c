/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:04:12 by hmanilow          #+#    #+#             */
/*   Updated: 2021/10/25 19:03:25 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static  int parsing_minus(const char *str, int *i, long int *n)
{
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			*n *= -1;
		(*i)++;
		if (str[*i] == '-' || str[*i] == '+')
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *str, int *numb)
{
	int			i;
	long int	znak;
	long int	result;

	znak = 1;
	result = 0;
	i = 0;
	while (((str[i] >= 7) && (str[i] <= 13)) || (str[i] == ' '))
		i++;
	if (!parsing_minus(str, &i, &znak))
		return (1);
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + str[i] - '0';
		if (znak * result > 2147483647)
			return (1);
		if (znak * result < -2147483648)
			return (1);
		i++;
	}
	*numb = result * znak;
	return (0);
}*/

static int	pars_minus(const char *str, int *i, long int *n)
{
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			*n *= -1;
		(*i)++;
		if (str[*i] == '-' || str[*i] == '+')
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *str, int *num)
{
	int			i;
	long int	n;
	long int	k;

	i = 0;
	n = 1;
	k = 0;
	while (((str[i] >= 7) && (str[i] <= 13)) || (str[i] == ' '))
		i++;
	if (!pars_minus (str, &i, &n))
		return (1);
	while (str[i] >= '0' && str[i] <= '9')
	{
		k = (k * 10) + str[i] - '0';
		if ((k * n) > 2147483647)
			return (1);
		if ((k * n) < -2147483648)
			return (1);
		i++;
	}
	*num = k * n;
	return (0);
}
