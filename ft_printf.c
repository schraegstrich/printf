/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:31:33 by lkirillo          #+#    #+#             */
/*   Updated: 2023/12/06 22:42:19 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_less_lines_more_vibes(va_list ptr)
{
	int	check;
	int	newlen;

	check = 0;
	newlen = 0;
	check = ft_printstr(va_arg(ptr, char *));
	if (check < 0)
		newlen = ft_printstr("(null)");
	else
		newlen = check;
	return (newlen);
}

static char	*ft_helper_s(va_list ptr, const char type)
{
	char	*s;

	s = 0;
	if (type == 'i' || type == 'd')
		s = ft_itoa(va_arg(ptr, int));
	if (type == 'u')
		s = ft_fake_itoa(va_arg(ptr, int));
	if (type == 'X' || type == 'x')
	{
		s = ft_hex_itoa(va_arg(ptr, int));
		if (type == 'x')
			s = ft_str_tolower(s);
	}
	return (s);
}

static int	ft_losing_my_religion(const char type, va_list ptr)
{
	int		len;
	char	*s;

	len = 0;
	s = 0;
	if (type == '%')
		len += write(1, "%", 1);
	if (type == 'c')
		len += ft_printchar(va_arg(ptr, int));
	if (type == 's')
		len += ft_less_lines_more_vibes(ptr);
	if (type == 'i' || type == 'd' || type == 'u'
		|| type == 'X' || type == 'x')
	{
		s = ft_helper_s(ptr, type);
		len += ft_printstr(s);
		free(s);
	}
	if (type == 'p')
	{
		s = ft_print_ptr(va_arg(ptr, unsigned long long));
		len += write(1, "0x", 2) + ft_printstr(ft_str_tolower(s));
		free(s);
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(ptr, str);
	while (str && str[i])
	{
		if (str[i] == '%')
		{
			len += ft_losing_my_religion(str[i + 1], ptr);
			i++;
		}
		else
			len += write(1, &str[i], 1);
		i++;
	}
	va_end(ptr);
	return (len);
}

// int main ()
// {
// 	int a = 25;
// 	printf("chepointkekeke!\n");
// 	printf("orig res: %p\n", &a);
// 	ft_printf("my res: %p\n", &a);
// 	return (0);
// }
