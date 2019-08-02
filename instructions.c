#include "push_swap.h"

int     instruction(char *str, t_list **stack, t_list **stackB)
{
    
	if (ft_strcmp(str, "ra") == 0)
		n_rot(stack);
    else if (ft_strcmp(str, "rra") == 0)
			n_rrot(stack);
    else if (ft_strcmp(str, "rb") == 0)
			n_rot(stackB);
	else if (ft_strcmp(str, "rrb") == 0)
			n_rrot(stackB);
    else if (ft_strcmp(str, "rr") == 0)
			rot_ab(stack, stackB);
	else if (ft_strcmp(str, "rrr") == 0)
			rrot_ab(stack, stackB);
    else if (ft_strcmp(str, "pb") == 0)
			*stackB = push_b(stack, stackB);
	else if (ft_strcmp(str, "pa") == 0)
			*stack = push_b(stackB, stack);
    else if (ft_strcmp(str, "sa") == 0)
			nswap(*stack);
    else if (ft_strcmp(str, "sb") == 0)
			nswap(*stackB);
    else if (ft_strcmp(str, "ss") == 0)
			ab_swap(*stack, *stackB);
        // print(*stackB);
    /*else if (ft_strcmp(str, "sb") == 0)
            rrot_a(stack); */
    return(0);
}