/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:34:50 by txaba             #+#    #+#             */
/*   Updated: 2019/08/20 09:36:28 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print(t_list *top)
{
	t_list *curr;

	curr = top;
	if (curr == NULL)
		ft_putstr("list is empty\n");
	while (curr)
	{
		ft_putnbr(curr->data);
		ft_putstr(" -> ");
		curr = curr->next;
	}
}

void	sort_3(t_list **stacka)
{
	t_list *tmp;

	tmp = *stacka;
	if (tmp->data > tmp->next->data)
		nswap(tmp, 'a');
	if (tmp->next->data > tmp->next->next->data)
		n_rrot(&tmp, 'a');
	if (tmp->data > tmp->next->data)
		nswap(tmp, 'a');
}

void	sort_2(t_list **stacka)
{
	t_list *tmp;

	tmp = *stacka;
	if (tmp->data > tmp->next->data)
		nswap(tmp, 'a');
}

void	sort_5(t_list **stacka, t_list **stackb)
{
	int		i;
	t_list	*tmp;

	i = 0;
	while (i++ < 2)
		push_smallest(stacka, stackb);
	i = 0;
	tmp = *stacka;
	if (tmp->data < tmp->next->data)
		nswap(tmp, 'a');
	sort_3(stacka);
	while (i++ < 2)
		push_a(stackb, stacka, 'a');
}

void	sort_4(t_list **stacka, t_list **stackb)
{
	t_list *tmp;

	push_smallest(stacka, stackb);
	tmp = *stacka;
	sort_3(stacka);
	push_a(stackb, stacka, 'a');
}
