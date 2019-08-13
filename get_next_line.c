/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 12:37:22 by txaba             #+#    #+#             */
/*   Updated: 2019/08/13 13:30:20 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			new_line(char **str, char **line, int fd, int val)
{
	int		i;
	char	*tmp;

	i = 0;
	while (str[fd][i] != '\n' && str[fd][i] != '\0')
		i++;
	if (str[fd][i] == '\n')
	{
		*line = ft_strsub(str[fd], 0, i);
		tmp = ft_strsub(str[fd], i + 1, ft_strlen(str[fd]));
		free(str[fd]);
		str[fd] = tmp;
	}
	else if (str[fd][i] == '\0')
	{
		if (val == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (1);
}

int			get_next_line(int fd, char **line)
{
	static char	*str[1024];
	int			val;
	char		*temp;
	char		buff[BUFF_SIZE + 1];

	if (fd < 0 || !line)
		return (-1);
	while ((val = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[val] = '\0';
		if (!str[fd])
			str[fd] = ft_strnew(BUFF_SIZE);
		temp = ft_strjoin(str[fd], buff);
		free(str[fd]);
		str[fd] = temp;
		if (ft_strchr(buff, '\n'))
			break ;
		ft_strclr(buff);
	}
	if (val < 0)
		return (-1);
	else if (val == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
		return (0);
	return (new_line(str, line, fd, val));
}
