/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:47:50 by hrasfi            #+#    #+#             */
/*   Updated: 2019/06/09 20:55:59 by hrasfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	long	number;

	number = (long)nb;
	if (number < 0)
	{
		ft_putchar('-');
		number = number * -1;
	}
	if (number >= 0 && number < 10)
	{
		ft_putchar(number + 48);
	}
	if (number > 10)
	{
		ft_putnbr(number / 10);
		ft_putchar(number % 10 + 48);
	}
}
