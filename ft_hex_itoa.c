/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_itoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:42:19 by lkirillo          #+#    #+#             */
/*   Updated: 2023/12/05 21:21:12 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	itoa_len(unsigned int n)

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

char	*ft_hex_itoa( unsigned int n)
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
	while (n != 0)
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

/*int main ()
{
	printf("%X", 0);
	return (0);
}*/
