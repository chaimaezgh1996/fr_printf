/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexmin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czghoumi <czghoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 18:52:41 by czghoumi          #+#    #+#             */
/*   Updated: 2024/12/06 19:06:39 by czghoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexmin(unsigned int num)
{
	char	*hex;
	char	s[8];
	int		count;
	int		i;

	hex = "0123456789abcdef";
	count = 0;
	i = 0;
	if (num == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	while (num > 0)
	{
		s[i] = hex[num % 16];
		num = num / 16;
		i++;
	}
	while (i > 0)
	{
		write(1, &s[--i], 1);
		count++;
	}
	return (count);
}
