/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:23:26 by lkirillo          #+#    #+#             */
/*   Updated: 2023/11/18 16:23:46 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*newstr;

	if (!s1 || !set)
		return (0);
	end = ft_strlen(s1);
	start = 0;
	while (start <= end && ft_strchr(set, s1[start]))
		start++;
	if (start > end)
		return (ft_strdup(""));
	while (end >= 0 && ft_strchr(set, s1[end - 1]))
		end--;
	newstr = (char *)malloc((end - start + 1) * sizeof(char));
	if (!newstr)
		return (0);
	ft_strlcpy(newstr, &s1[start], end - start + 1);
	return (newstr);
}
/*
int	main ()
{
	printf("%s", ft_strtrim("abcHellocba", "abc"));

	return (0);
}
*/
