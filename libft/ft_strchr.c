/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:35:51 by lkirillo          #+#    #+#             */
/*   Updated: 2023/11/28 14:26:06 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (NULL);
}

/*int main(void)
{
	const char str1[]	= "0x1097e4a40";
	int cc    = 1024;

	const char str2[]	= "0x1097e4a40";
	int ccc	= 1024;

	printf("Str: %s \n", strchr(str1, cc));
	printf("Str: %s", ft_strchr(str2, ccc));
	return (0);
} 
*/
