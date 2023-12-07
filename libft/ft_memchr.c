/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:00:23 by lkirillo          #+#    #+#             */
/*   Updated: 2023/11/22 15:28:13 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, int n)
{
	int	i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			if (((unsigned char *)str)[i] == (unsigned char) c)
				return ((unsigned char *)str + i);
			i++;
		}
	}
	return (NULL);
}
