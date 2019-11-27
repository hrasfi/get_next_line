/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:45:27 by hrasfi            #+#    #+#             */
/*   Updated: 2019/06/09 20:32:03 by hrasfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l;
	char	*r;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	l = ft_strlen((char*)s1);
	l = l + ft_strlen((char*)s2);
	if (!(r = (char*)ft_memalloc((l + 1))))
		return (NULL);
	r = ft_strcpy(r, (char*)s1);
	r = ft_strcat(r, (char*)s2);
	return (r);
}
