/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   half_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:32:51 by txaba             #+#    #+#             */
/*   Updated: 2019/08/13 13:32:52 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    half_sort(t_list **top, t_list **b, int len, int *ch)
{
    int i, j = 0;
    int res1;
    int res2;
    int l;
    int k = ft_lstlen(*top);

    i = 1;
    res1 = 0;
    res2 = 0;
    if (len % 2 == 0)
		l = len / 2;
	else
		l = (len / 2) + 1;
    while (j < 4)
    {
       // printf("CH = %d\n", ch[j]);
        i = 1;
        while (i <= l)
        {
            //trav(*top);
            //printf("pos[%d]     %d\n", i, pos(*top, i));
            if (pos(*top, i) >= find_min(*top) && pos(*top, i) <= ch[j])
                {
                    res1 = i;
                    break ;
                }
              i++;
        }
        i = 1;
        while (k > l)
        {
             //trav(*top);
               //         printf("pos[%d]     %d\n", k, pos(*top, k));

            if (pos(*top, k) >= find_min(*top) && pos(*top, k) <= ch[j])
                {
                    res2 = i;
                    break ;
                }
            i++;
            k--;
        }
        if (res2 == 0 && res1  == 0)
            j++;
        else
            break ;
    }
    //Seperate function
   if (res2 > res1 || res2 == res1)
   {
       if (res1 == 0 || (res1 == 0 && res2 == 1))
            while(res2 >= 1)//111
            {
                n_rrot(top, 'a');
                res2--;
            }
        else
            while(res1 > 1)//switch 111
            {
                n_rot(top, 'a');
                res1--;
            }
   }
    else if (res2 < res1)
    {
        if (res2 == 0)
            while(res1 > 1)
        {
            n_rot(top, 'a');
            res1--;
        }
        else
            while(res2 >= 1)
            {
                n_rrot(top, 'a');
                   res2--;
            }
    }
    push_b(top, b, 'b');
}

void    call(t_list **a, t_list **b)
{
    int len;
    int *ch;
    int i;

    i = 0;
    len = ft_lstlen(*a);
    ch = range(*a, find_max(*a), find_min(*a));
    while (i < len / 2)
    {
        half_sort(a, b, len, ch);
        i++;
    }
     print(*a);
       printf("\n");
       print(*b);
       printf("\n");
    len = ft_lstlen(*a);
    while (len >= 2)
    {
        push_smallest(a, b);
        len--;
    }
   print(*a);
       printf("\n");
       print(*b);
       printf("\n");
    len = ft_lstlen(*b);
    i =  0;
    while (i < len / 2)
    {
        push_a(b, a, 'a');
        i++;
    }
    len = ft_lstlen(*b);
     //printf("\n||");
    // print(*a); 
    // printf("\n");
     //printf("||\n");
      /* printf("\n||");
    print(*b); */
    while (len > 0)
    {
        push_largest(a, b);
        //printf("\033[0;36mPOS1 = %d     POS2 = %d\n", pos(*a, 1), pos(*a, 2));
        if (pos(*a, 2) < pos(*a, 1))
            nswap(*a, 'a');
        len--;
    }
   // print(*a); 
}