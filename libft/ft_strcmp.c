/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:29:50 by hrasfi            #+#    #+#             */
/*   Updated: 2019/05/31 23:05:32 by hrasfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*s11;
	unsigned char	*s21;
	int				i;

	s11 = (unsigned char*)s1;
	s21 = (unsigned char*)s2;
	i = 0;
	while (s11[i] == s21[i] && s11[i] != '\0' && s21[i] != '\0')
	{
		i++;
	}
	return (s11[i] - s21[i]);
}
