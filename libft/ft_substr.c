/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:26:00 by lkirillo          #+#    #+#             */
/*   Updated: 2023/11/22 13:18:54 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*substr;
	unsigned int		i;
	unsigned int		s_len;

	i = 0;
	if (!s)
		return (0);
	s_len = ft_strlen((char *)s);
	if (len == 0 || start >= s_len)
		substr = malloc (1 * sizeof(char));
	else if (len > s_len - start)
		substr = malloc((s_len - start + 1) * sizeof(char));
	else
		substr = malloc ((len + 1) * sizeof(char));
	if (!substr)
		return (0);
	while (i < len && start < s_len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}

/*int main ()
{
	char str[] = "This is a string";
	printf("Str: %s", ft_substr(str,17,18));
	
	return (0);
}*/
