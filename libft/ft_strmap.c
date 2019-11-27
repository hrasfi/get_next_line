/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:43:23 by hrasfi            #+#    #+#             */
/*   Updated: 2019/04/23 09:52:57 by hrasfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	l;
	size_t	i;
	char	*r;

	r = NULL;
	if (s != NULL)
	{
		l = ft_strlen((char*)s);
		i = 0;
		if (!(r = (char*)malloc((int)l + 1)))
			return (NULL);
		while (i < l)
		{
			r[i] = f((char)s[i]);
			i++;
		}
		r[i] = '\0';
	}
	return (r);
}
