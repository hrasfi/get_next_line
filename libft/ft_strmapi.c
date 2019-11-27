/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:43:55 by hrasfi            #+#    #+#             */
/*   Updated: 2019/06/14 19:25:01 by hrasfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		l;
	int		i;
	char	*r;

	r = NULL;
	if (s != NULL)
	{
		l = (int)ft_strlen((char*)s);
		i = 0;
		if (!(r = (char*)malloc(l + 1)))
			return (NULL);
		while (i < l)
		{
			r[i] = f((unsigned int)i, (char)s[i]);
			i++;
		}
		r[i] = '\0';
	}
	return (r);
}
