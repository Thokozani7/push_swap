#include "push_swap.h"

int     ft_lstlen(t_list *lst)
{
	int i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}