/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_ha.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 08:54:36 by txaba             #+#    #+#             */
/*   Updated: 2019/08/23 14:09:54 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list		*arg_append(int sw, t_list *top)
{
	t_list *tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	tmp->data = sw;
	tmp->next = top;
	top = tmp;
	return (top);
}

int			check_num(char *st)
{
	size_t i;

	i = 0;
	if (ft_atol(st) > ft_atol(MAX) || ft_atol(st) < ft_atol(MIN))
	{
		ft_putstr("Error");
		return (0);
	}
	if (st[i] == '-' || st[i] == '+')
	{
		i++;
	}
	while (st[i] >= '0' && st[i] <= '9')
	{
		i++;
	}
	if (ft_strlen(st) == i)
		return (1);
	else
	{
		ft_putstr("Error");
		return (0);
	}
}

int			ft_dup(t_list *top)
{
	int		i;
	t_list	*start;
	t_list	*trav;

	i = 0;
	start = top;
	while (start)
	{
		trav = start->next;
		while (trav)
		{
			if (trav->data == start->data)
			{
				ft_putstr("Error");
				return (0);
			}
			trav = trav->next;
		}
		start = start->next;
	}
	return (1);
}

void		divsort(t_list **stacka, t_list **stackb, int argc, int argl)
{
	if (argc == 3)
		sort_2(stacka);
	else if (argc == 4)
		sort_3(stacka);
	else if (argc == 6)
		sort_5(stacka, stackb);
	else if (argc == 5)
		sort_4(stacka, stackb);
	else if (argl == 3)
		sort_2(stacka);
	else if (argl == 4)
		sort_3(stacka);
	else if (argl == 6)
		sort_5(stacka, stackb);
	else if (argl == 5)
		sort_4(stacka, stackb);
	else
		exce(stacka, stackb, argl, argc);
}

int			argl(char **str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
