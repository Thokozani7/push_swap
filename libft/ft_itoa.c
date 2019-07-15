/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:13:51 by txaba             #+#    #+#             */
/*   Updated: 2019/06/15 16:45:44 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static	int		digit_count(int n)
{
	int			i;
	int			re;

	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		re = n % 10;
		n = n / 10;
		i++;
	}
	return (i);
}

static	char	*neg(char *s, int tmp, int i)
{
	int			inc;

	inc = 0;
	if (tmp < 0)
	{
		s[i - 1] = '-';
	}
	if (tmp == -2147483648)
		s[inc] = '8';
	inc = ft_strlen(s);
	if (tmp == -2147483648)
		s[inc - 1] = '-';
	return (s);
}

static	char	*spec_min(int temp, int i, int n, char *s)
{
	int			va;
	int			inc;

	va = 0;
	inc = 0;
	if (temp == -2147483648)
	{
		n = n - 1;
	}
	while (i-- > 0)
	{
		va = n % 10;
		s[inc++] = va + '0';
		n = n / 10;
	}
	return (s);
}

char			*ft_itoa(int n)
{
	int			i;
	char		*s;
	int			inc;
	int			tmp;

	i = digit_count(n);
	tmp = n;
	if (n < 0)
		n = n * -1;
	s = (char *)malloc(sizeof(char) * (i));
	if (s == NULL)
		return (NULL);
	inc = 0;
	if (n == 0)
	{
		s[inc] = n + '0';
		i++;
	}
	s = spec_min(tmp, i, n, s);
	s = neg(s, tmp, i);
	s = ft_strrev(s);
	inc = ft_strlen(s);
	s[inc] = '\0';
	return (s);
}
