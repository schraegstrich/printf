/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:13:31 by lkirillo          #+#    #+#             */
/*   Updated: 2023/11/29 19:09:33 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, int n)
{
	int					i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (n > 0)
	{
		((unsigned char *)dst)[i] = ((unsigned const char *)src)[i];
		i++;
		n--;
	}
	return (dst);
}

/*
int main()
{
    char str1[] = "To Here str will be copied";
    char str2[] = "From Here";
 
    puts("str1 before memcpy ");
    puts(str1);
 
    // Copies contents of str2 to str1
    memcpy(str1, str2, sizeof(str2));
 
    puts("\nstr1 after memcpy ");
    puts(str1);

	char str3[] = "To Here str will be copied";
    char str4[] = "From Here";
 
    puts("str3 before memcpy ");
    puts(str3);
 
    // Copies contents of str2 to str1
    ft_memcpy(str3, str4, sizeof(str4));
 
    puts("\nstr3 after memcpy ");
    puts(str3);
 
    return 0;
}
*/