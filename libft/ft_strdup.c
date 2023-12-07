/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:56:03 by lkirillo          #+#    #+#             */
/*   Updated: 2023/11/18 16:13:56 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

char	*ft_strdup(const char *str1)
{
	int		len;
	char	*str2;

	len = ft_strlen((char *)str1);
	str2 = malloc ((len + 1) * sizeof(char));
	if (!str2)
		return (0);
	ft_memcpy(str2, str1, len + 1);
	return (str2);
}

/*int	main ()
{
	char strtest1[] = "This is a string";
	char strtest2[] = "This is a string";

	printf("Str %s:\n", strdup(strtest1));
	printf("Str %s:\n", ft_strdup(strtest2));
	return (0);
}*/