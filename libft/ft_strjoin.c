/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 11:30:16 by txaba             #+#    #+#             */
/*   Updated: 2019/06/14 16:25:45 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	l = ft_strlen((char *)s1);
	str = (char *)malloc(sizeof(char) * ((l + ft_strlen((char *)s2) + 1)));
	while (s1[i] && str != NULL)
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] && str != NULL)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	if (str != NULL)
		str[i] = '\0';
	return (str);
}
