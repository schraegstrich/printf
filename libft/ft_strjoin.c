/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:00:48 by lkirillo          #+#    #+#             */
/*   Updated: 2023/11/18 16:19:40 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	int		j;
	char	*newstr;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	newstr = malloc((len + 1) * sizeof(char));
	i = 0;
	j = 0;
	if (!newstr)
		return (0);
	while (i < len && s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}
	while (i < len && s2[j] != '\0')
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
int main ()
{
	const char str1[] = "This is ";
	const char str2[] = "a string";
	printf("Str:%s\n", ft_strjoin(str1, str2));
}
*/