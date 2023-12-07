/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:37:12 by lkirillo          #+#    #+#             */
/*   Updated: 2023/11/28 14:29:17 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h> */
#include "libft.h" 

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (*str)
	{
		while (str[i] != '\0')
			i++;
	}
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}

/*
int main(void)
{
	const char str1[10]	= "worwld";
	int cc    = 'w';

	const char str2[10]	= "worwld";
	int ccc	= 'w';

	printf("Str: %s \n", strrchr(str1, cc));
	printf("Str: %s", ft_strrchr(str2, ccc));
	return (0);
} 
*/