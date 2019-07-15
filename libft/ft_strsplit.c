/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 17:29:44 by txaba             #+#    #+#             */
/*   Updated: 2019/06/14 17:17:51 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int	arg_count(char const *s, char c)
{
	int	co;
	int	i;

	i = 0;
	co = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] != c)
			co++;
		if (s[i] != c && s[i - 1] == c)
			co++;
		i++;
	}
	return (co);
}

static	int	let_count(char const *s, char c)
{
	int	x;
	int	i;

	i = 0;
	x = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0' && s[i] != c)
	{
		x++;
		i++;
	}
	return (x);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (arg_count(s, c)) + 1);
	if (str == NULL)
		return (NULL);
	while (j < arg_count(s, c))
	{
		str[j] = ft_strnew(let_count((s + i), c));
		k = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
			str[j][k++] = s[i++];
		str[j][k] = '\0';
		j++;
	}
	str[j] = NULL;
	return (str);
}
