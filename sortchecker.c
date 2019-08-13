/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortchecker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:31:30 by txaba             #+#    #+#             */
/*   Updated: 2019/08/13 13:31:32 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int sorted(t_list *stack)
{
    t_list *temp;

	temp = stack;
     while (temp->next != NULL)
    {
        if (temp->data > temp->next->data)
            return (0);
        temp = temp->next;
    }
    return (1);
}
