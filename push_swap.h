/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:23:40 by txaba             #+#    #+#             */
/*   Updated: 2019/08/13 13:28:42 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include "libft/includes/libft.h"
#include "get_next_line.h"
# define MAX "2147483647"
# define MIN "-2147483647"

typedef struct s_list
{
	int			data;
	struct s_list	*next;
}					t_list;

t_list		*arg_append(int sw, t_list *top);
void		n_rot(t_list **stack, char c);
void		n_rrot(t_list **stack, char c);
int			instruction(char *str, t_list **stack, t_list **stack_b);
int     	ft_lstlen(t_list *lst);
void		push_b(t_list **top, t_list **stack_b, char c);
t_list    	*push(int dat, t_list *top);
void     	push_a(t_list **stack_b, t_list **top, char c);
int    		isEmpty(t_list *top);
void 		print(t_list *top);
void	nswap(t_list *stack, char c);
void	ab_swap(t_list *stack_a, t_list *stack_b, char c);
void          rot_ab(t_list **stack, t_list **stackB, char c);
void          rrot_ab(t_list **stack, t_list **stackB, char c);
int checkcom(char *str);
int sorted(t_list *stack);
void	small_to_top(t_list **top, t_list **b, int loc, int len);
void	big_to_top(t_list **top, t_list **b, int loc, int len);
void    half_sort(t_list **top, t_list **b, int len, int *ch);
void    half_sort(t_list **top, t_list **b, int len, int *ch);
void    call(t_list **a, t_list **b);
int		find_min(t_list *stack);
int     find_max(t_list *stack);
int     loc(t_list *top, int min);
int		pos(t_list *a, int loc);
int     *range(t_list *top, int big, int small);
void		push_largest(t_list **stack, t_list **b);
void		push_smallest(t_list **stack, t_list **b);


#endif
