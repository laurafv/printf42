/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufuent <laufuent@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:32:15 by laufuent          #+#    #+#             */
/*   Updated: 2024/09/09 19:43:31 by laufuent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include <unistd.h>
//#include <stdio.h>

int	ft_putstr(char const *s, int count)
{
	size_t	i;

	i = 0;
	if (s == NULL)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		count += 6;
	}
	else
	{
		while (s[i] != '\0')
		{
			count = ft_putchar(s[i], count);
			if (count == -1)
				return (count);
			i++;
		}
	}
	return (count);
}
/*
int	main()
{
	
	int count;
	char *s;

	s = "holaqueetal";
	count = ft_putstr(s, count);
	write(1, '\n',1);
	return(0);
}*/
