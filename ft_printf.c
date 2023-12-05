/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:31:33 by lkirillo          #+#    #+#             */
/*   Updated: 2023/12/05 21:41:52 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		i;
	int		len;
	int		check;
	char	*s;

	i = 0;
	len = 0;
	check = 0;
	s = 0;
	va_start(ptr, str);
	while (str && str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
				len += write(1, "%", 1);
			if (str[i] == 'c')
				len += ft_printchar(va_arg(ptr, int));
			else if (str[i] == 's')
			{
				check = ft_printstr(va_arg(ptr, char *));
				if (check < 0)
					len += ft_printstr("(null)");
				else
					len += check;
			}
			else if (str[i] == 'i' || str[i] == 'd')
			{
				s = ft_itoa(va_arg(ptr, int));
				len += ft_printstr(s);
				free(s);
			}
			else if (str[i] == 'u')
			{
				s = ft_fake_itoa(va_arg(ptr, int));
				len += ft_printstr(s);
				free(s);
			}
			else if (str[i] == 'X')
			{
				s = ft_hex_itoa(va_arg(ptr, int));
				len += ft_printstr(s);
				free(s);
			}
			else if (str[i] == 'x')
			{
				s = ft_hex_itoa(va_arg(ptr, int));
				len += ft_printstr(ft_str_tolower(s));
				free(s);
			}
		}
		else
			len += write(1, &str[i], 1);
		i++;
	}

	va_end(ptr);
	return (len);
}

/*int main ()
{
	ft_printf(" NULL %s NULL ", NULL);
	return (0);
}*/
