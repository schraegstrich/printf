/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:27:58 by lkirillo          #+#    #+#             */
/*   Updated: 2023/12/06 16:59:27 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	itoa_len(unsigned long long n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

char	*ft_print_ptr(unsigned long long n)
{
	char	*str;
	int		i;
	int		temp;

	i = itoa_len(n);
	if (n == 0)
		return (ft_strdup("0"));
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i] = '\0';
	while (i > 0)
	{
		i--;
		temp = n % 16;
		if (temp < 10)
			str[i] = temp + 48;
		else
			str[i] = temp + 55;
		n = n / 16;
	}
	return (str);
}

// int main (void)
// {

// 	unsigned long long a = 1337;
// 	char *res = ft_ptr_itoa(*(unsigned long long *)&a);
// 	printf("Res1: %p\n", res);
// 	printf("Res2: %p\n", &a);
// }