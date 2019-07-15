/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:25:19 by txaba             #+#    #+#             */
/*   Updated: 2019/06/05 09:17:51 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrev(char *s)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s) - 1;
	str = (char *)malloc(sizeof(char) * (len + 1));
	while (len >= 0)
	{
		str[i] = s[len];
		i++;
		len--;
	}
	str[i] = '\0';
	return (str);
}
