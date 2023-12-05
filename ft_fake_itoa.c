/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fake_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:59:48 by lkirillo          #+#    #+#             */
/*   Updated: 2023/12/05 19:04:22 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	itoa_len(unsigned int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_fake_itoa(unsigned int n)
{
	char	*str;
	int		i;

	i = itoa_len(n);
	if (n == 0)
	{
		str = ft_strdup("0");
		return (str);
	}
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i] = '\0';
	while (n != 0)
	{
		i--;
		str[i] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
