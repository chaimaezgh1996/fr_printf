/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czghoumi <czghoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 20:34:31 by czghoumi          #+#    #+#             */
/*   Updated: 2024/12/06 21:06:56 by czghoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_adress(char *s, int count, int i)
{
	while (i > 0)
	{
		write(1, &s[--i], 1);
		count++;
	}
	return (count);
}

int	ft_putadress(void *v)
{
	char				*hex;
	char				s[16];
	int					count;
	int					i;
	unsigned long long	num;

	hex = "0123456789abcdef";
	count = 0;
	i = 0;
	if (v == NULL)
		return (write(1, "0x0", 3), 3);
	num = (unsigned long long)v;
	write (1, "0x", 2);
	count = count + 2;
	while (num)
	{
		s[i] = hex[num % 16];
		num = num / 16;
		i++;
	}
	return (count = print_adress(s, count, i), count);
}
