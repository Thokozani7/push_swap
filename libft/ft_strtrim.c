/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:34:42 by txaba             #+#    #+#             */
/*   Updated: 2019/06/14 16:59:18 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static	int	space(int i, char const *s)
{
	if (i == 0)
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
	else
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i--;
	return (i);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		len;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	i = space(i, s);
	if (s[i] == '\0')
		return ((char *)s + i);
	len = ft_strlen(s) - 1;
	len = space(len, s);
	str = (char *)malloc(sizeof(char) * (len - i + 2));
	if (str == '\0')
		return (NULL);
	while (j < len - i + 1)
	{
		str[j] = s[i + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
