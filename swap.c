/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:29:08 by txaba             #+#    #+#             */
/*   Updated: 2019/08/13 13:29:13 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	nswap(t_list *stack, char c)
{
	int *a;
	int *b;
	int temp;

	if (stack == NULL)
		return ;
	a = &stack->data;
	if (stack->next == NULL)
		return ;
	b = &stack->next->data;
	temp = *a;
	*a = *b;
	*b = temp;
	if (c == 'c')
		return ;
	c == 'a' ? ft_putendl("sa") : ft_putendl("sb");
}

void	small_to_top(t_list **top, t_list **b, int loc, int len)
{
	int mid;

	if (len % 2 == 0)
		mid = len / 2;
	else
		mid = (len / 2) + 1;
	if (loc == 1 && len != 2)
	{
		push_b(top, b, 'b');
		return ;
	}
	else if ((*top)->data > (*top)->next->data && len == 2)
	{
		nswap(*top, 'a');
		return ;
	}
	else if (loc <= mid)
	{
		while (1 < loc--)
			n_rot(top, 'a');
	}
	else if (loc > mid)
	{
		while (len-- >= loc)
			n_rrot(top, 'a');
	}
	push_b(top, b, 'b');
}

void	ab_swap(t_list *stack_a, t_list *stack_b, char c)
{
	nswap(stack_a, c);
	nswap(stack_b, c);
}

void	big_to_top(t_list **top, t_list **b, int loc, int len)
{
	int mid;

	if(!*b || !*top)
		return ;
	if (len % 2 == 0)
		mid = len / 2;
	else
		mid = (len / 2) + 1;
	if (loc == 1 && len != 2)
	{
		push_a(b, top, 'a');
		return ;
	}
	else if ((*b)->next == NULL)
		{
			push_a(b, top, 'a');
			return ;
		}
	/*else if ((*b)->data < (*b)->next->data && len == 2)
	{
		nswap(*b, 'b');
		return ;
	}*/
	else if (loc <= mid)
	{
		while (1 < loc--)
			n_rot(b, 'b');
	}
	else if (loc > mid)
	{
		while (len-- >= loc)
			n_rrot(b, 'b');
	}
	push_a(b, top, 'a');
}
