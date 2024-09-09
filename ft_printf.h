/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufuent <laufuent@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:10:40 by laufuent          #+#    #+#             */
/*   Updated: 2024/09/09 21:36:07 by laufuent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H //prq el buscador lo busca asi 
# define FT_PRINTF_H

# define HEXA_MAYUS 0
# define HEXA_MIN 1

int	ft_printf(const char *str, ...);
int	ft_putchar(char c, count);
int	ft_putnbr(long int n, count);
int ft_putstr(char *str, count);
int	ft_puthex(long int n, count);
int	ft_putnbr_u(unsigned int n, count);
int ft_putptr(long long n, count);

#endif 
