/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:30:32 by txaba             #+#    #+#             */
/*   Updated: 2019/08/19 18:33:13 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	n_rot(t_list **stack, char c)
{
	t_list *top;
	t_list *end;

	top = *stack;
	*stack = (*stack)->next;
	end = top;
	if (ft_lstlen(*stack) <= 1)
		return ;
	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = top;
	top->next = NULL;
	if (c == 'c')
		return ;
	c == 'a' ? ft_putendl("ra") : ft_putendl("rb");
}

void	n_rrot(t_list **stack, char c)
{
	t_list *top;
	t_list *end;
	t_list *tmp;

	top = *stack;
	end = *stack;
	if (ft_lstlen(*stack) <= 1)
		return ;
	while (end->next->next != NULL)
	{
		end = end->next;
	}
	tmp = end;
	end = end->next;
	tmp->next = NULL;
	end->next = top;
	*stack = end;
	if (c == 'c')
		return ;
	c == 'a' ? ft_putendl("rra") : ft_putendl("rrb");
}

void	rot_ab(t_list **stack, t_list **stackb, char c)
{
	n_rot(stack, c);
	n_rot(stackb, c);
}

void	rrot_ab(t_list **stack, t_list **stackb, char c)
{
	n_rrot(stack, c);
	n_rrot(stackb, c);
}
