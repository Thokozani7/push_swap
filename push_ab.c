/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:55:43 by txaba             #+#    #+#             */
/*   Updated: 2019/08/18 17:56:54 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		do_push(t_list *temp, t_list *p, t_list **s_b, t_list **top)
{
	int dat;

	dat = p->data;
	if (temp == NULL)
		return (0);
	temp->data = dat;
	temp->next = *top;
	*top = temp;
	*s_b = p->next;
	return (1);
}
