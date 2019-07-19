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

typedef struct s_list
{
	int			data;
	struct s_list	*next;
}					t_list;
t_list	*top = NULL;

int		checker();

#endif
