/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czghoumi <czghoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:38:42 by czghoumi          #+#    #+#             */
/*   Updated: 2024/12/16 01:36:11 by czghoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char s)
{
	write (1, &s, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	if (s == NULL)
		return (ft_putstr("(null)"));
	i = 0;
	while (s[i] != '\0')
	{
		write (1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_addprintf(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == '%')
		count += ft_putchar (c);
	if (c == 'c')
		count += ft_putchar (va_arg(args, int));
	if (c == 's')
		count += ft_putstr (va_arg(args, char *));
	if (c == 'x')
		count += ft_puthexmin (va_arg(args, unsigned int));
	if (c == 'X')
		count += ft_puthexmaj (va_arg(args, unsigned int));
	if (c == 'i' || c == 'd')
		count += ft_putnbr (va_arg(args, int));
	if (c == 'u')
		count += ft_putnbr_pos (va_arg(args, unsigned int));
	if (c == 'p')
		count += ft_putadress (va_arg(args, void *));
	return (count);
}

int	ft_printf(const char *temp, ...)
{
	int		count;
	int		i;
	va_list	args;

	i = 0;
	count = 0;
	if (write(1, "", 0) < 0)
		return (-1);
	va_start(args, temp);
	while (temp[i] != '\0')
	{
		if (temp[i] == '%')
		{
			i++;
			count += ft_addprintf(temp[i], args);
		}
		else
			count += ft_putchar (temp[i]);
		i++;
	}
	return (va_end(args), count);
}
