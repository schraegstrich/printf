/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:47:37 by lkirillo          #+#    #+#             */
/*   Updated: 2023/11/18 16:02:02 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		i++;
	}
	return (0);
}

/*
int main()
{
    char str1[] = "Aaaa";
    char str2[] = "";
	char str3[] = "Aaaa";
    char str4[] = "";
 
printf("Str: %d \n", memcmp(str1, str2, 0));
printf("Str: %d", ft_memcmp(str3, str4, 0));

    return 0;
}
*/