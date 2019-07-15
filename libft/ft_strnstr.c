/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:58:02 by txaba             #+#    #+#             */
/*   Updated: 2019/06/13 08:56:19 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *ha, const char *ne, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hay;
	char	*nee;

	i = 0;
	hay = (char *)ha;
	nee = (char *)ne;
	if (nee[i] == '\0')
		return (hay);
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i + j] == nee[j] && (i + j) < len)
		{
			j++;
			if (nee[j] == '\0')
			{
				return (hay + i);
			}
		}
		i++;
	}
	return (NULL);
}
