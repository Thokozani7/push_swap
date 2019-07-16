/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:11:39 by txaba             #+#    #+#             */
/*   Updated: 2019/07/15 09:58:07 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	arg_append(int sw)
{
	t_list *tmp;
	t_list *q = NULL;
	tmp = (t_list *)malloc(sizeof(t_list));
	tmp->data = sw;
	tmp->next = NULL;
	if (head == NULL)
		head = tmp;
	else
	{
		q = head;
			while(q->next != NULL)
				q = q->next;
		q->next = tmp;
	}
}

void print()
{
		while (head)
		{
			ft_putnbr(head->data);
			ft_putstr(" -> ");
			head = head->next;
		}
}

int check_num(char *st)
{
	int i;
	i = 0;
	if (st[i] == '-')
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

int		ft_dup()
{
	int 	i;
	t_list	*start;
	t_list	*trav;

	i = 0;
	start = head;
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

int		main(int argc, char **argv)
{
	int		count;
	int 	i;
	
	count = argc;
	i = 1;
	if (argc == 1)
		return (0);
	else
	{
		while (i < count)
		{
			if (check_num(argv[i]) == 0)
				exit(1);
			/* if (dup(argv[i]) == 0)
				exit(1); */
			arg_append(ft_atoi(argv[i]));		
			i++;
		}
		if (ft_dup() == 0)
			exit (1);
	
	}

	print();
	return (0);
}