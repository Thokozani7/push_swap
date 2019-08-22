/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:28:16 by txaba             #+#    #+#             */
/*   Updated: 2019/08/20 09:45:07 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		instruction(char *str, t_list **stack, t_list **stackb)
{
	if (ft_strcmp(str, "ra") == 0)
		n_rot(stack, 'c');
	else if (ft_strcmp(str, "rra") == 0)
		n_rrot(stack, 'c');
	else if (ft_strcmp(str, "rb") == 0)
		n_rot(stackb, 'c');
	else if (ft_strcmp(str, "rrb") == 0)
		n_rrot(stackb, 'c');
	else if (ft_strcmp(str, "rr") == 0)
		rot_ab(stack, stackb, 'c');
	else if (ft_strcmp(str, "rrr") == 0)
		rrot_ab(stack, stackb, 'c');
	else if (ft_strcmp(str, "pb") == 0)
		push_b(stack, stackb, 'c');
	else if (ft_strcmp(str, "pa") == 0)
		push_b(stackb, stack, 'c');
	else if (ft_strcmp(str, "sa") == 0)
		nswap(*stack, 'c');
	else if (ft_strcmp(str, "sb") == 0)
		nswap(*stackb, 'c');
	else if (ft_strcmp(str, "ss") == 0)
		ab_swap(*stack, *stackb, 'c');
	return (0);
}
