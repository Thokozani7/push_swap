/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:33:34 by txaba             #+#    #+#             */
/*   Updated: 2019/08/23 14:12:35 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	mainwhile(t_list **stacka, int count, int argc, char **argv)
{
	t_stack		j;

	j.i = 0;
	while (j.i <= count)
	{
		if (j.i != count)
		{
			if (check_num(argv[count]) == 0)
				exit(1);
			*stacka = arg_append(ft_atoi(argv[count]), *stacka);
			count--;
		}
		else if (j.i == count && argc == 2)
		{
			if (check_num(argv[count]) == 0)
				exit(1);
			*stacka = arg_append(ft_atol(argv[count]), *stacka);
			count--;
		}
		else
			count--;
	}
}

int				main(int argc, char **argv)
{
	t_stack	j;

	j.stacka = NULL;
	j.stackb = NULL;
	j.count = argc - 1;
	j.i = 0;
	if (argc == 1)
		return (0);
	else
	{
		if (argc == 2)
		{
			argv = ft_strsplit(argv[1], ' ');
			j.argl = argl(argv) + 1;
			j.count = argl(argv) - 1;
		}
		mainwhile(&j.stacka, j.count, argc, argv);
		if (ft_dup(j.stacka) == 0)
			exit(1);
		j.len = ft_lstlen(j.stacka);
		if (sorted(j.stacka, j.len) == 1)
			return (0);
		divsort(&j.stacka, &j.stackb, argc, j.argl);
	}
	return (0);
}
