/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:28:16 by txaba             #+#    #+#             */
/*   Updated: 2019/08/13 13:28:25 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int     instruction(char *str, t_list **stack, t_list **stackB)
{
    
	if (ft_strcmp(str, "ra") == 0)
		n_rot(stack, 'c');
    else if (ft_strcmp(str, "rra") == 0)
			n_rrot(stack, 'c');
    else if (ft_strcmp(str, "rb") == 0)
			n_rot(stackB, 'c');
	else if (ft_strcmp(str, "rrb") == 0)
			n_rrot(stackB, 'c');
    else if (ft_strcmp(str, "rr") == 0)
			rot_ab(stack, stackB, 'c');
	else if (ft_strcmp(str, "rrr") == 0)
			rrot_ab(stack, stackB, 'c');
    else if (ft_strcmp(str, "pb") == 0)
			/**stackB =*/ push_b(stack, stackB, 'c');
	else if (ft_strcmp(str, "pa") == 0)
			/**stack =*/ push_b(stackB, stack, 'c');
    else if (ft_strcmp(str, "sa") == 0)
			nswap(*stack, 'c');
    else if (ft_strcmp(str, "sb") == 0)
			nswap(*stackB, 'c');
    else if (ft_strcmp(str, "ss") == 0)
			ab_swap(*stack, *stackB, 'c');
        // print(*stackB);
    /*else if (ft_strcmp(str, "sb") == 0)
            rrot_a(stack); */
    return(0);
}
