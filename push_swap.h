/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:23:40 by txaba             #+#    #+#             */
/*   Updated: 2019/07/15 09:58:10 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include "libft/includes/libft.h"
# define MAX "2147483647"
# define MIN "-2147483647"

typedef struct s_list
{
	int			data;
	struct s_list	*next;
}					t_list;

t_list		*arg_append(int sw, t_list *top);
void		rot_ab(t_list **stack);
void		rrot_ab(t_list **stack);
int			instruction(char *str, t_list **stack, t_list *stack_b);
int     	ft_lstlen(t_list *lst);
t_list		*push_b(t_list **top, t_list *stack_b);
t_list    *push(int dat, t_list *top);
t_list     *push_a(t_list **stack_b, t_list *top);
int    isEmpty(t_list *top);
void print(t_list *top);

//int		checker();

#endif
