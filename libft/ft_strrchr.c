/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:28:48 by hrasfi            #+#    #+#             */
/*   Updated: 2019/05/31 23:59:43 by hrasfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*t;
	int		i;

	i = 0;
	t = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			t = ((char*)s + i);
		s++;
	}
	if (t != NULL)
		return (t);
	else if (c == '\0')
		return ((char*)s);
	else
		return (NULL);
}
