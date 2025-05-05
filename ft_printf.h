/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czghoumi <czghoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:33:33 by czghoumi          #+#    #+#             */
/*   Updated: 2024/12/06 20:52:31 by czghoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *temp, ...);
int	ft_putnbr(int c);
int	ft_putnbr_pos(unsigned int n);
int	ft_puthexmaj(unsigned int num);
int	ft_puthexmin(unsigned int num);
int	ft_putadress(void *v);

#endif
