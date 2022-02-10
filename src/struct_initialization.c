/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_initialization.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:18:37 by hmanilow          #+#    #+#             */
/*   Updated: 2022/02/10 18:18:37 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	struct_initialization(t_grenade *s_grenader_Vinnie)
{
	s_grenader_Vinnie->s_a = NULL;
	s_grenader_Vinnie->s_b = NULL;
	s_grenader_Vinnie->length_a = 0;
	s_grenader_Vinnie->length_b = 0;
	s_grenader_Vinnie->mas = NULL;
}
