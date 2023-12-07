/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:13:02 by lkirillo          #+#    #+#             */
/*   Updated: 2023/11/18 15:27:29 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/
#include "libft.h"

void	*ft_memset(void *str, int c, int len)
{
	int		i;
	char	*newstr;

	i = 0;
	newstr = (char *)str;
	while (i < len)
	{
		*newstr = c;
		newstr++;
		i++;
	}
	return (str);
}

/*int main () {
   char str[50];

   strcpy(str,"This is a function");
   puts(str);

   memset(str,'a',8);
   puts(str);

	ft_memset(str,'a',8);
   puts(str);
   
   return(0);
}
*/