/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:42:55 by hrasfi            #+#    #+#             */
/*   Updated: 2019/05/22 17:32:01 by hrasfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	l;
	int	i;

	if (s != NULL && f != NULL)
	{
		i = 0;
		l = (int)ft_strlen(s);
		while (i < l)
		{
			f((unsigned char)i, s + i);
			i++;
		}
	}
}
