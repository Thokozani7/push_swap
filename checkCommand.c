#include "push_swap.h"

int checkcom(char *str)
{
    int 	i;
	char	*commands[13] = {"ra", "rb", "rr", "rra", "rrb", "sa", "sb", "ss", "pa", "pb", "x", "rrr"};
	 		
	i = 0;
	//commands[13] = {"ra", "rb", "rr", "rra", "rrb", "sa", "sb", "ss", "pa", "pb", "x", "rrr"};
	while (i < 12)
	{
		if (ft_strcmp(commands[i], str) == 0)
		{
			return(1);
		}
		i++;
	}
	return (0); 
}