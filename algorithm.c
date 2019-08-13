#include "push_swap.h"

void	small_to_top(t_list **top, t_list **b, int loc, int len)
{
	int mid;
		// printf("\n*** %d ***\n\n", loc);

	 if (len % 2 == 0)
		mid = len/2;
	else 
		mid = (len/2) + 1;

	if (loc == 1 && len != 2)
	{
		push_b(top, b, 'a');
		//push_b(top, b);
		return ;
	}
	else if ((*top)->data > (*top)->next->data && len == 2)
	{
		// nswap(*top, 'a');
		 nswap(*top);
		return ;
	}
	else if (loc <= mid)
	{
		while (1 < loc--)
			 rot_ab(top, 'a');
			 //n_rot(top);
	}
	else if (loc > mid)
	{
		while (len-- >= loc)
			 rrot_ab(top, 'a');
			//n_rrot(top);
	}
		/* if (loc == 2)
		nswap(*top, 'a');
		else
		{
			while (1 < loc--)
				rot_ab(top, 'a');
		} */

	push_b(top, b, 'a');
	//push_b(top, b);
}