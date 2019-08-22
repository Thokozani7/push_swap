/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:23:40 by txaba             #+#    #+#             */
/*   Updated: 2019/08/21 09:39:57 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include "libft/includes/libft.h"
# define MAX "2147483647"
# define MIN "-2147483647"

typedef	struct		s_list
{
	int				data;
	struct	s_list	*next;
}					t_list;
typedef struct		s_stack
{
	char			*op;
	int				j;
	int				i;
	int				*temp;
	t_list			*stack_b;
	t_list			*top;
	int				count;
	char			*line;
	int				len;
	int				fd;
	int				argl;
	t_list			*stacka;
	t_list			*stackb;
}					t_stack;
t_list				*arg_append(int sw, t_list *top);
void				n_rot(t_list **stack, char c);
void				n_rrot(t_list **stack, char c);
int					instruction(char *str, t_list **stack, t_list **stack_b);
int					ft_lstlen(t_list *r);
void				push_b(t_list **top, t_list **stack_b, char c);
t_list				*push(int dat, t_list *top);
void				push_a(t_list **stack_b, t_list **top, char c);
int					isempty(t_list *top);
void				print(t_list *top);
void				nswap(t_list *stack, char c);
void				ab_swap(t_list *stack_a, t_list *stack_b, char c);
void				rot_ab(t_list **stack, t_list **stackb, char c);
void				rrot_ab(t_list **stack, t_list **stackb, char c);
int					checkcom(char *str);
int					sorted(t_list *stack, int len);
void				small_to_top(t_list **top, t_list **b, int loc, int len);
void				big_to_top(t_list **top, t_list **b, int loc, int len);
void				half_sort(t_list **top, t_list **b, int len, int *ch);
void				half_sort(t_list **top, t_list **b, int len, int *ch);
void				call(t_list **a, t_list **b);
int					find_min(t_list *stack);
int					find_max(t_list *stack);
int					loc(t_list *top, int min);
int					pos(t_list *a, int loc);
int					*find_ch(t_list *top, int a, int b);
void				push_largest(t_list **stack, t_list **b);
void				push_smallest(t_list **stack, t_list **b);
void				results(t_list **top, t_list **b, int k, int *ch);
void				exce(t_list **a, t_list **b, int argl, int argc);
void				delete_n(t_list **top);
int					half_mid(int len);
int					do_push(t_list *temp, t_list *p, t_list **s_b
		, t_list **top);
void				bsmall_to_top(t_list **top, int loc, int len);
void				generate(int res1, int res2, t_list **top
		, t_list **b);
int					do_push(t_list *temp, t_list *p, t_list **s_b
		, t_list **top);
int					check_num(char *st);
int					ft_dup(t_list *top);
void				divsort(t_list **stacka, t_list **stackb, int argc
		, int argl);
void				sort_4(t_list **stacka, t_list **stackb);
void				sort_5(t_list **stacka, t_list **stackb);
void				sort_3(t_list **stacka);
void				sort_2(t_list **stacka);
int					argl(char **str);
int					*find_ch_500(t_list *top, int a, int b);

#endif
