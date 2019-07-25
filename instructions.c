#include "push_swap.h"

int     instruction(char *str, t_list **stack, t_list *stackB)
{
    if (ft_strcmp(str, "ra") == 0)
        rot_ab(stack);
    else if (ft_strcmp(str, "rra") == 0)
            rrot_ab(stack);
    /*else if (ft_strcmp(str, "rb") == 0)
            rot_ab(stack);
    else if (ft_strcmp(str, "rrb") == 0)
            rrot_ab(stack);*/
      else if (ft_strcmp(str, "pb") == 0)
            stackB = push_b(stack, stackB);
            
            print(stackB);
            ft_putchar ('\n');
    /*else if (ft_strcmp(str, "sb") == 0)
            rrot_a(stack); */
    return(0);
}