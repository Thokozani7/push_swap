/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:02:27 by txaba             #+#    #+#             */
/*   Updated: 2019/06/12 08:55:29 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*st;

	i = 0;
	st = (char *)s;
	while (i < n && n > 0)
	{
		st[i] = 0;
		i++;
	}
}
