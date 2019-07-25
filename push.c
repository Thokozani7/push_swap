#include "push_swap.h"

t_list    *push(int dat, t_list *top)
{
    t_list *temp;

    temp = (t_list *)malloc(sizeof(t_list));
    if (temp == NULL)
        return (0);
    temp -> data = dat;
    temp -> next = top;
    top = temp;
	return (top);
}

t_list		*push_b(t_list **top, t_list *stack_b)
{
	t_list *temp;
	t_list *p;
	int			dat;

	if (isEmpty(*top))
        return (stack_b);
	p = *top;
	if (p -> next == NULL)
	{
		stack_b = push(p -> data, stack_b);
		*top = NULL;
		return (stack_b);
	}
	dat = p -> data;
	temp = (t_list *)malloc(sizeof(t_list));
    if (temp == NULL)
        return (0);
    temp -> data = dat;
    temp -> next = stack_b;
    stack_b = temp;
	*top = p -> next;
    return (stack_b);
}

t_list     *push_a(t_list **stack_b, t_list *top)
{
    t_list *temp;
	t_list *p;
    int         dat;

	if (isEmpty(*stack_b))
		return (top);
	p = *stack_b;
	if (p -> next == NULL)
	{
		top = push(p -> data, top);
		*stack_b = NULL;
        return (top);
	}
    dat = p -> data;
    temp = (t_list *)malloc(sizeof(t_list));
    if (temp == NULL)
        return (0);
    temp -> data = dat;
    temp -> next = top;
    top	= temp;
    *stack_b = p ->next;
    return (top);
}