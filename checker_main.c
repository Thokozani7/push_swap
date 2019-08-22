/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:11:39 by txaba             #+#    #+#             */
/*   Updated: 2019/08/21 11:18:55 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <fcntl.h>

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
			*stacka = arg_append(ft_atoi(argv[count]), *stacka);
			count--;
		}
		else
			count--;
	}
}

static int		inswhile(char *line, t_list **stacka, t_list **stackb)
{
	if (checkcom(line) == 1)
	{
		instruction(line, stacka, stackb);
		free(line);
		return (1);
	}
	else
	{
		ft_putstr("Invalid Commdand!!\n");
		return (0);
	}
}

int		main(int argc, char **argv)
{
	t_stack		j;

	j.stacka = NULL;
	j.stackb = NULL;
	j.count = argc - 1;
	j.i = 0;
	if (argc >= 2)
	{
		if (argc == 2)
			argv = ft_strsplit(argv[1], ' ');
		j.argl = argl(argv);
		j.count = j.argl - 1;
		mainwhile(&j.stacka, j.count, argc, argv);
		if (ft_dup(j.stacka) == 0)
			exit(1);
		j.len = ft_lstlen(j.stacka);
		while (get_next_line(j.fd, &j.line) > 0)
		{
			inswhile(j.line, &j.stacka, &j.stackb);
			if (checkcom(j.line) != 1)
				break ;
		}
		sorted(j.stacka, j.len) == 1 ? ft_putendl("OK") : ft_putendl("KO");
	}
	return (0);
}
