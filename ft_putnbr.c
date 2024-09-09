/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufuent <laufuent@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:58:42 by laufuent          #+#    #+#             */
/*   Updated: 2024/09/09 22:09:19 by laufuent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//#include <limits.h>
#include "ft_printf.h"

int	ft_putnbr(long int n, int count)
{
	long int num;

	num = n;
	if (n > INT_MAX || n < INT_MIN)
		return (-1);
	if (num < 0)
	{
		count = ft_putchar('-', count);
		if (count == -1)
			return (count);
			num *= -1;
	}
	if (num > 9)
	{
		count = ft_putnbr(num / 10, count);
		if (count == -1)
			return (-1);
	}
	count = ft_putchar(num % 10 + '0', count);
	if (count == -1)
		return (-1);
	return (count);
}

//int	main ()
{
	int count;
	long int m = 02000;
	printf("Original -> %ld\n", m);
	count = ft_putnbr(m, count);
	write(1, '\n', 1);
	return(0);
}
