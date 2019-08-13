/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkCommand.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:30:45 by txaba             #+#    #+#             */
/*   Updated: 2019/08/13 13:30:47 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int checkcom(char *str)
{
    int 	i;
	char	*commands[13] = {"ra", "rb", "rr", "rra", "rrb", "sa", "sb", "ss", "pa", "pb", "x", "rrr"};
	 		
	i = 0;
	//commands[13] = {"ra", "rb", "rr", "rra", "rrb", "sa", "sb", "ss", "pa", "pb", "x", "rrr"};
	while (i < 12)
	{
		if (ft_strcmp(commands[i], str) == 0)
		{
			return(1);
		}
		i++;
	}
	return (0); 
}
