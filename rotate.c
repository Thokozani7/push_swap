#include "push_swap.h"

void          rot_ab(t_list **stack)
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

void           rrot_ab(t_list **stack)
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