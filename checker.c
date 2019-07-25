/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:11:39 by txaba             #+#    #+#             */
/*   Updated: 2019/07/15 09:58:07 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <fcntl.h>
#include "get_next_line.h"

t_list	*arg_append(int sw, t_list *top)
{
	/* t_list *tmp;
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
	} */
	


	t_list *tmp;
	tmp = (t_list *)malloc(sizeof(t_list));
	tmp->data = sw;
	tmp->next = top;
	top = tmp;
	return (top);
}

void print(t_list *top)
{
		while (top)
		{
			ft_putnbr(top->data);
			ft_putstr(" -> ");
			top = top->next;
		}
}

int check_num(char *st, t_list *stackA)
{
	int i;
	i = 0;

	/* if (st[0] != '-' && (!ft_strcmp(st, MAX) || ft_strlen(st) < ft_strlen(MAX) ))
	{
		ft_putstr("Error");
		return (0);
	}  */
	/*if (st[0] == '-' && (st[10] < '8' || ft_strlen(st) > ft_strlen(MIN)))
		{
			ft_putstr("Error");
			return (0);
		}*/
		/* printf("%d\n", ft_atoi(st));
		printf("%d\n", ft_atoi(MAX));
 */
		if ((ft_atoi(st) >= ft_atoi(MAX) || ft_strlen(st) > ft_strlen(MAX) || ft_atoi(st) < 0) && ft_strcmp(st, MAX))
		{
			ft_putstr("Error");
			return (0);
		}
	/*if (st[9] > '7' || st[8] > '4' || !ft_strcmp(st, MAX))
	{
			ft_putstr("Error");
			return (0);
	} */
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

int		ft_dup(t_list *top)
{
	int 	i;
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

int		main(int argc, char **argv)
{
	int		count;
	int 	i;
	int		fd;
	char	*line;
	t_list	*stackA = NULL;
	t_list	*stackB = NULL;
	
	//stackA = (t_list *)malloc(sizeof(t_list));
	count = argc - 1;
	i = 0;
	if (argc == 1)
		return (0);
	else
	{
		while (i < count)
		{
			if (check_num(argv[count], stackA) == 0)
				exit(1);
			/* if (dup(argv[i]) == 0)
				exit(1); */
			stackA = arg_append(ft_atoi(argv[count]), stackA);		
			count--;
		}
		if (ft_dup(stackA) == 0)
			exit (1);
		//fd = open(argv[argc], O_RDONLY);
		  while (get_next_line(fd, &line) > 0)
			{
				/* if (line[1] == 'a') */
				instruction(line, &stackA, stackB);
				/* else if (line[1] == 'b')
					instruction(line, &stackB); */
				//break ;
				print(stackA);
				free(line);
			}
		
	
	}
	
	//stackB = push_b(&stackA, stackB);
	ft_putchar('\n');
	print(stackB);
	return (0);
}