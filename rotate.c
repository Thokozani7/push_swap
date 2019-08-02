#include "push_swap.h"

void          n_rot(t_list **stack)
{
    t_list *top;
    t_list *end;

    top = *stack;
    *stack = (*stack)->next;
    end = top;

    if (ft_lstlen(*stack) <= 1)
		return ;
	while (end->next != NULL)
	{
        end = end->next;
	}
    end->next = top;
    top->next = NULL;
}

void           n_rrot(t_list **stack)
{
    t_list *top;
    t_list *end;
    t_list *tmp;

    top = *stack;
    end = *stack;
    if (ft_lstlen(*stack) <= 1)
		return ;
	while (end->next->next != NULL)
	{
        end = end->next;
	}
    tmp = end;
    end = end->next;
    tmp->next = NULL;
    end->next = top;
    *stack = end;

}

void          rot_ab(t_list **stack, t_list **stackB)
{
    /* t_list *a;
    t_list *b;

    a = *stack;
    b = *stackB;
    n_rot(&a);
    n_rot(&b);
    *stack = a;
    *stackB = b; */

    n_rot(stack);
    n_rot(stackB);
}

void          rrot_ab(t_list **stack, t_list **stackB)
{
    n_rrot(stack);
    n_rrot(stackB);
}
