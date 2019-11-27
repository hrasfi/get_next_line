/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 03:03:12 by hrasfi            #+#    #+#             */
/*   Updated: 2019/06/13 22:13:56 by hrasfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	numdig(int i)
{
	unsigned int	count;

	count = 0;
	if (i < 0)
		count++;
	if (i == 0)
		return (1);
	while (i != 0)
	{
		i = i / 10;
		count++;
	}
	return (count);
}

char				*ft_itoa(int n)
{
	char	*str;
	int		count;
	long	m;

	count = numdig(n);
	if (!(str = (char *)malloc(sizeof(char) * count + 1)))
		return (NULL);
	m = n;
	if (m < 0)
		m = m * (-1);
	str[count] = '\0';
	count--;
	while (count >= 0)
	{
		str[count] = (unsigned char)(m % 10) + 48;
		m = m / 10;
		count--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
