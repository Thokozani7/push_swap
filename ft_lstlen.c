/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:48:34 by txaba             #+#    #+#             */
/*   Updated: 2019/08/18 17:51:12 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_lstlen(t_list *r)
{
	t_list		*temp;
	int			len;

	temp = r;
	len = 0;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}

int		half_mid(int len)
{
	int l;

	if (len % 2 == 0)
		l = len / 2;
	else
		l = (len / 2) + 1;
	return (l);
}
