/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czghoumi <czghoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 01:30:50 by czghoumi          #+#    #+#             */
/*   Updated: 2024/12/06 18:48:17 by czghoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar(unsigned int n)
{
	char	s[12];
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (n > 0)
	{
		s[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	s[i] = '\0';
	while (--i >= 0)
	{
		write(1, &s[i], 1);
		count++;
	}
	return (count);
}

int	ft_putnbr_pos(unsigned int n)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	if (n == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	if (n > 0)
		count = count + ft_putchar(n);
	return (count);
}
