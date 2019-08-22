/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkcommand.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:56:13 by txaba             #+#    #+#             */
/*   Updated: 2019/08/20 09:56:24 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		checkcom(char *str)
{
	if (ft_strcmp(str, "ra") == 0)
		return (1);
	else if (ft_strcmp(str, "rra") == 0)
		return (1);
	else if (ft_strcmp(str, "rb") == 0)
		return (1);
	else if (ft_strcmp(str, "rrb") == 0)
		return (1);
	else if (ft_strcmp(str, "rr") == 0)
		return (1);
	else if (ft_strcmp(str, "rrr") == 0)
		return (1);
	else if (ft_strcmp(str, "pb") == 0)
		return (1);
	else if (ft_strcmp(str, "pa") == 0)
		return (1);
	else if (ft_strcmp(str, "sa") == 0)
		return (1);
	else if (ft_strcmp(str, "sb") == 0)
		return (1);
	else if (ft_strcmp(str, "ss") == 0)
		return (1);
	else
		return (0);
}
