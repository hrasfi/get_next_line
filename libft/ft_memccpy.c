/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:21:40 by hrasfi            #+#    #+#             */
/*   Updated: 2019/05/30 23:19:46 by hrasfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*desti;
	const char		*srci;
	unsigned char	cha;

	cha = (unsigned char)c;
	desti = (unsigned char *)dst;
	srci = (char *)src;
	i = 0;
	while (i < n)
	{
		desti[i] = srci[i];
		if (desti[i] == cha)
		{
			return (desti + i + 1);
		}
		i++;
	}
	return (NULL);
}
