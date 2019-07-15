/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:12:27 by txaba             #+#    #+#             */
/*   Updated: 2019/05/28 12:02:35 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdup(const char *str)
{
	char	*d;
	size_t	len;

	len = ft_strlen(str);
	d = (char *)malloc(sizeof(char) * (len + 1));
	if (d == NULL)
	{
		return (NULL);
	}
	ft_strcpy(d, str);
	return (d);
}
