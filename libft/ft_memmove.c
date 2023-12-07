/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:53:02 by lkirillo          #+#    #+#             */
/*   Updated: 2023/11/28 13:39:22 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, int n)
{
	char	*temp;
	char	*dest;

	temp = (char *)src;
	dest = (char *)dst;
	if (!dst && !src)
		return (0);
	if (temp < dest)
	{
		while (n--)
			dest[n] = temp[n];
	}
	else
		ft_memcpy(dest, temp, n);
	return (dst);
}

/*void	*ft_memmove(void *dst, const void *src, int len)
{
	int	i;

	i = 0;
	if (!(unsigned char *)dst || !(unsigned char *)src)
		return (0);
	while (i < len && len != 0 && ((unsigned char *)dst)[i] != '\0')
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
*/

/*char	*temp_to_dst(char *newdst, const char *newsrc)
{
	int		i;

	i = 0;
	while (newdst[i] <= '\0')
	{
		newdst[i] = newsrc[i];
		i++;
	}
	newdst[i] = '\0';
	return (newdst);
}

void	*ft_memmove(void *dst, const void *src, int len)
{
	int			i;
	char		*pdst;
	const char	*psrc;

	i = 0;
	pdst = (char *)dst;
	psrc = (const char *)src;
	if (!dst || !src)
		return (0);
	if (pdst < psrc)
	{
		while (i < len)
			temp_to_dst(pdst, psrc);
	}
	else if (pdst > psrc)
	{
		i = len -1;
		while (i-- >= 0)
			temp_to_dst(pdst, psrc);
	}
	return (dst);
}
*/
/*int main()
{
    char str1[] = "To Here str will be copied";
    char str2[] = "From Here";
 
    puts("str1 before memmove ");
    puts(str1);
 
    // Copies contents of str2 to str1
    memmove(str1, str2, 6);
 
    puts("\nstr1 after memmove ");
    puts(str1);

	char str3[] = "To Here str will be copied";
    char str4[] = "From Here";
 
    puts("\nstr3 before memmove ");
    puts(str3);
 
    // Copies contents of str4 to str3
    ft_memmove(str3, str4, 6);
 
    puts("\nstr3 after memmove ");
    puts(str3);
 
    return 0;
}
*/