/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_loc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:29:30 by txaba             #+#    #+#             */
/*   Updated: 2019/08/13 13:29:46 by txaba            ###   ########.fr       */
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

int     find_max(t_list *stack)
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

int     loc(t_list *top, int min)
{
    t_list *len;
    int i;

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

int     *range(t_list *top, int big, int small)
{
    int j;
    int i = 1;
    int new = 0;
    int *chunk = (int *)malloc(sizeof(int) * 4);

    j = 0;
    if ((big - small) % 2 != 0)
        new += 1;
    new += (big - small) / 4;
    chunk[0] = new + small;
    while (i < 3 && j < 4)
       chunk[i++] = chunk[j++] + new;
    chunk[i] = find_max(top);
    return (chunk);

}
