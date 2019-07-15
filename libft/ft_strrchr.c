/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 15:55:57 by txaba             #+#    #+#             */
/*   Updated: 2019/06/15 11:19:13 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*st;

	len = ft_strlen(s);
	st = (char *)s;
	while (st[len] != c && len != 0)
		len--;
	if (st[len] == c)
		return (st + len);
	return (NULL);
}
