/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:33:13 by txaba             #+#    #+#             */
/*   Updated: 2019/08/13 13:33:15 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list    *push(int dat, t_list *top)
{
    t_list *temp;

    temp = (t_list *)malloc(sizeof(t_list));
    if (temp == NULL)
        return (0);
    temp -> data = dat;
    temp -> next = top;
    top = temp;
	return (top);
}

void		push_b(t_list **top, t_list **stack_b, char c)
{
	t_list *temp;
	t_list *p;
	int			dat;

	if (isEmpty(*top))
		return ;
	p = *top;
	if (p -> next == NULL)
	{
		*stack_b = push(p -> data, *stack_b);
		*top = NULL;
		return ;
	}
	dat = p -> data;
	temp = (t_list *)malloc(sizeof(t_list));
    if (temp == NULL)
        return ;
    temp -> data = dat;
    temp -> next = *stack_b;
    *stack_b = temp;
	*top = p -> next;
	if (c == 'c')
		return ;
	ft_putendl("pb");
}

void	push_a(t_list **stack_b, t_list **top, char c)
{
    t_list *temp;
	t_list *p;
    int         dat;

	if (isEmpty(*stack_b))
		return ;
	p = *stack_b;
	if (p->next == NULL)
	{
		*top = push(p -> data, *top);
		*stack_b = NULL;
        return ;
	}
  
    dat = p -> data;
    temp = (t_list *)malloc(sizeof(t_list));
    if (temp == NULL)
        return ;
    temp -> data = dat;
    temp -> next = *top;
    *top	= temp;
    *stack_b = p ->next;
	if (c == 'c')
		return ;
	ft_putendl("pa");	
}

void		push_smallest(t_list **stack, t_list **b)
{
	int min;
	int location;
	t_list *a;

	a = *stack;
	location = 0;
    min = find_min(*stack);
	location = loc(*stack, min);
	small_to_top(stack, b, location, ft_lstlen(*stack));
}

void		push_largest(t_list **stack, t_list **b)
{
	int max;
	int location;
	t_list *a;

	a = *b;
	location = 0;
    max = find_max(*b);
	location = loc(*b, max);
	big_to_top(stack, b, location, ft_lstlen(*b));
}
