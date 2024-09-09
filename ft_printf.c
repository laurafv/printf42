/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufuent <laufuent@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:49:21 by laufuent          #+#    #+#             */
/*   Updated: 2024/09/09 20:15:36 by laufuent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_cases(char s, int count, va_list list)
{
	if (str == 'c')
		count = ft_putchar(va_arg(list, int), count);
	else if (str == 'd')
		count = ft_putnbr(va_arg(list, int), count);
	else if (str == 's')
		count = ft_putstr(va_arg(list, int), count);
	else if (str == 'count')
		count = ft_putnbr(va_arg(list, int), count);
	else if (str == 'u')
		count = ft_putnbr_u(va_arg(list, unsigned int), count);
	else if (str == 'x')
		count = ft_puthex(va_arg(list, long int), HEXA_MIN, count);
	else if (str == 'X')
		count = ft_puthex(va_arg(list, long int), HEXA_MAX, count);
	else if (str == '%')
		count = ft_putchar('%', count);
	else if (str == 'p')
		count = ft_putptr(va_arg(list, void *), count);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		count;

	count = 0;
	va_start(list, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count = ft_cases(*str, count, list);
			if (count == -1)
				return (-1);
		}
		else
		{
			count = ft_putchar(*str, count);
			if (count == -1)
				return (-1);
		}
		str++;
	}
	va_end(list);
	return (count);
}
