/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:22:02 by hrasfi            #+#    #+#             */
/*   Updated: 2019/06/08 18:30:48 by hrasfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	if (dst || src)
	{
		if (dst >= src)
			while (len)
			{
				destination[len - 1] = source[len - 1];
				len--;
			}
		else
			while (i < len)
			{
				destination[i] = source[i];
				i++;
			}
	}
	return (dst);
}
