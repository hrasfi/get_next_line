/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:22:57 by hrasfi            #+#    #+#             */
/*   Updated: 2019/11/27 23:50:59 by hrasfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft/libft.h"
#include "get_next_line.h"

int		fillin(char **line, char **str)
{
	char			*temp;
	int				i;

	i = 0;
	temp = NULL;
	while ((*str)[i] != '\n' && (*str)[i])
		i++;
	if (i != 0 || (*str)[i] == '\n')
	{
		*line = ft_strsub(*str, 0, i);
		if ((*str)[i] != '\0')
		{
			temp = ft_strdup(*str + i + 1);
			free(*str);
		}
		else if ((*str)[i] == '\0')
		{
			temp = ft_strdup(*str + i);
			free(*str);
		}
		*str = temp;
		return (1);
	}
	return (0);
}

int		get_next_line(int fd, char **line)
{
	int				ret;
	char			*buff;
	static char		*str[4864];
	char			*ptr;

	if (fd < 0 || line == NULL || fd > 4864 || BUFFER_SIZE < 0)
		return (-1);
	if (!(buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	if (!str[fd])
		if (!(str[fd] = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1))))
			return (-1);
	while ((ret = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[ret] = '\0';
		ptr = ft_strjoin(str[fd], buff);
		free(str[fd]);
		str[fd] = ptr;
		if (ft_strchr(str[fd], '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	free(buff);
	return (fillin(line, &str[fd]));
}
