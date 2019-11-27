/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:24:47 by hrasfi            #+#    #+#             */
/*   Updated: 2019/05/30 23:33:13 by hrasfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*string2;
	int		len;

	len = (int)ft_strlen(s1);
	string2 = (char *)malloc(sizeof(char) * (len + 1));
	if (string2 == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		string2[i] = s1[i];
		i++;
	}
	string2[i] = '\0';
	return (string2);
}
