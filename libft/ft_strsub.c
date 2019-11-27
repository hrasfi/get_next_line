/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:45:00 by hrasfi            #+#    #+#             */
/*   Updated: 2019/06/03 01:31:07 by hrasfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	char	*ret;

	if (s == NULL)
		return (NULL);
	i = 0;
	str = (char*)s;
	if ((int)start > (int)ft_strlen((char*)s))
		return (NULL);
	while (start > 0)
	{
		str++;
		start--;
	}
	if (!(ret = (char*)malloc(len + 1)))
		return (NULL);
	while (i < len)
	{
		ret[i] = *str;
		i++;
		str++;
	}
	ret[i] = '\0';
	return (ret);
}
