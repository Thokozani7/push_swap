#include "push_swap.h"

void	nswap(t_list *stack)
{
	int *a;
	int *b;
	int temp;

	a = &stack -> data;
	if (stack -> next == NULL)
		return;
	b = &stack -> next -> data;
	temp = *a;
	*a = *b;
	*b = temp;
}

void	ab_swap(t_list *stack_a, t_list *stack_b)
{
	nswap(stack_a);
	nswap(stack_b);
}