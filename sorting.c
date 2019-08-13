/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:33:34 by txaba             #+#    #+#             */
/*   Updated: 2019/08/13 13:33:43 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void sort_3(t_list **stackA)
{
    if(stackA->data > stackA->next->data)
        nswap(*stackA);
    if(stackA->next->data > stackA->next->next->data)
        n_rot(*stackA)
}*/
/* int *int_place(t_list *top)
{
    int s[3];
    t_list tmp;

    tmp = top;
    s[0] = top->data;
    s[1] = top->next->data;
    while (tmp->next)
        tmp = tmp->next;
    s[2] = top->data;
    return (s);
}
void sort(t_list **top)
{
    t_list *tmp;
    t_list *stackB;
    int s[3];

    stackB = NULL;
    tmp = *top;
    s = int_place(tmp);
    tmp = *top;
    if (s[0] < s[1] && s[0] < s[2])
        push_b(tmp, stackB);
    else if (s[0] < s[1] && s[0] > s[2])
            n_rrot(tmp);
    else if (s[0] > s[2])
            n_rot(tmp);
    else if (s[0] > s[1])
            nswp(tmp);
    push_a();
} */

t_list	*arg_append(int sw, t_list *top)
{
	t_list *tmp;
	tmp = (t_list *)malloc(sizeof(t_list));
	tmp->data = sw;
	tmp->next = top;
	top = tmp;
	return (top);
}

void print(t_list *top)
{
	t_list *curr;
	curr = top;
	if (curr == NULL) ft_putstr("list is empty\n");
	while (curr)
	{
		ft_putnbr(curr->data);
		ft_putstr(" -> ");
		curr = curr->next;
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

int main(int argc, char **argv)
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
		//while (sorted(stackA) != 1)
	//	{
		 	//if (checkcom(line) == 1)
		 //	{
		// 		/* if (line[1] == 'a') */
		// 		if (ft_strcmp(line, "x") == 0)
		// 			break;
		// 		instruction(line, &stackA, &stackB);
		// 		/* else if (line[1] == 'b')
		// 			instruction(line, &stackB); */
		// 		ft_putstr("stackB: ");
		// 		print(stackB);
		// 		//break ;
		 		//ft_putchar('\n');
		 		//ft_putstr("stackA: ");
		 	//	print(stackA);
		// 		free(line);
		 		//ft_putchar('\n');
		// 	}
			call(&stackA, &stackB);

		//}
/* 		print(stackA);
		ft_putchar('\n');
		print(stackB); */
	}
	//stackB = push_b(&stackA, stackB);
	// ft_putchar('\n');
	 //print(stackB);  
	// stackB = push_b(&stackA, stackB);
	 //ft_putchar('\n');
	// print(stackB);
	return (0);
}

/*pb
pb
pb
pb
pa
pa
rrb
pa*/