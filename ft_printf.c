/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:31:33 by lkirillo          #+#    #+#             */
/*   Updated: 2023/12/04 20:13:44 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		i;

	i = 0;
	va_start(ptr, str);

	while (str && str[i])
	{
		if (str[i] == '%')
		{
			if (str[i] == '%' && str[i + 1] == '%')
				write (1, "%", 1);
			i++;
			if (str[i] == 'c')
				ft_printchar(ptr);
			else if (str[i] == 's')
				ft_printstr(ptr);
			//else
			//	write(1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}

	va_end(ptr);

	return (i);
}

int main ()
{
	ft_printf("Hello, %% %s %c %s ", "New", 'a', "World");
	return (0);
}
