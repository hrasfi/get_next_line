/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:30:08 by hrasfi            #+#    #+#             */
/*   Updated: 2019/04/23 09:14:20 by hrasfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s21;

	s11 = (unsigned char*)s1;
	s21 = (unsigned char*)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s11[i] == s21[i] && s11[i] && s21[i] && i < n - 1)
	{
		i++;
	}
	return (s11[i] - s21[i]);
}
