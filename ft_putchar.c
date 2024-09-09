/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufuent <laufuent@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:49:22 by laufuent          #+#    #+#             */
/*   Updated: 2024/09/09 19:26:47 by laufuent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_putchar (const char c, int count)
{
	if (write (1, &c, 1) != 1)
		return (-1);
	else
		count++;
	return (count);
}
/*
int	main ()
{
	int count;

	count = ft_putchar('A', count);
	write(1, "\n", 1);

	return(0);
}*/
