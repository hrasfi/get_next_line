/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:21:06 by hrasfi            #+#    #+#             */
/*   Updated: 2019/05/22 02:44:25 by hrasfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*desti;
	char	*srci;
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	desti = (char *)dst;
	srci = (char *)src;
	i = 0;
	while (i < n)
	{
		desti[i] = srci[i];
		i++;
	}
	return (dst);
}
