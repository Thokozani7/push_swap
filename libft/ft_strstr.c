/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:39:46 by txaba             #+#    #+#             */
/*   Updated: 2019/06/15 11:19:57 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*hay;
	char	*nee;

	i = 0;
	hay = (char *)haystack;
	nee = (char *)needle;
	if (nee[i] == '\0')
		return (hay);
	while (hay[i])
	{
		j = 0;
		while (hay[i + j] == nee[j])
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
