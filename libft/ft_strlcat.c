/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:49:00 by lkirillo          #+#    #+#             */
/*   Updated: 2023/11/28 18:27:16 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/
#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	x;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	x = dstlen;
	if (!dst || !src)
		return (0);
	if (dstsize < dstlen)
		return (dstsize + srclen);
	while ((i + dstlen) < dstsize && src[i] != '\0')
	{
		dst[x] = src[i];
		i++;
		x++;
	}
	if ((dstlen + i) == dstsize && i > 0)
		dst[x - 1] = '\0';
	else
		dst[x] = '\0';
	return (dstlen + srclen);
}
/*
int main(void)
{
	const char src1[10]	= "ja";
	char dest1[10]   = "123";

	char src[10]	= "ja";
	char dest[10]	= "123";

	size_t 			nb = 2;
	unsigned int 	nb2 = 2;
	//strcat(src, dest);
	printf("Str: %ld \n", strlcat(dest1, src1, nb));
	printf("Str: %u", ft_strlcat(dest, src, nb2));
	return (0);
} */