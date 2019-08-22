/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_loc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:29:30 by txaba             #+#    #+#             */
/*   Updated: 2019/08/18 17:55:02 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		find_min(t_list *stack)
{
	int	min;

	min = stack->data;
	while (stack->next)
	{
		if (min > stack->next->data)
			min = stack->next->data;
		stack = stack->next;
	}
	return (min);
}

int		find_max(t_list *stack)
{
	int	max;

	max = stack->data;
	while (stack->next)
	{
		if (max < stack->next->data)
			max = stack->next->data;
		stack = stack->next;
	}
	return (max);
}

int		loc(t_list *top, int min)
{
	t_list		*len;
	int			i;

	i = 1;
	len = top;
	while (len && len->data != min)
	{
		i++;
		len = len->next;
	}
	return (i);
}

int		pos(t_list *a, int loc)
{
	int i;
	int	value;

	i = 0;
	value = 0;
	while (a && i++ < loc)
	{
		value = a->data;
		a = a->next;
	}
	return (value);
}

int		*find_ch(t_list *top, int a, int b)
{
	int j;
	int i;
	int new;
	int *chunk;

	j = 0;
	i = 1;
	new = 0;
	chunk = (int *)malloc(sizeof(int) * 5);
	if ((a - b) % 2 != 0)
		new += 1;
	new += (a - b) / 5;
	chunk[0] = new + b - 1;
	while (i < 4 && j < 5)
		chunk[i++] = chunk[j++] + new;
	chunk[i] = find_max(top);
	return (chunk);
}
