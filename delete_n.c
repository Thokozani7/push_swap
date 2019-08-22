/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_n.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:46:46 by txaba             #+#    #+#             */
/*   Updated: 2019/08/21 09:34:11 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	delete_n(t_list **top)
{
	t_list *temp;
	t_list *next;

	temp = *top;
	while (temp)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*top = NULL;
}
