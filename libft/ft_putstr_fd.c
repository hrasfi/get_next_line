/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:48:31 by hrasfi            #+#    #+#             */
/*   Updated: 2019/06/05 01:39:06 by hrasfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	char	*str;
	int		i;

	i = 0;
	if (s != NULL)
	{
		str = (char*)s;
		while (str[i])
		{
			ft_putchar_fd(str[i], fd);
			i++;
		}
	}
}
