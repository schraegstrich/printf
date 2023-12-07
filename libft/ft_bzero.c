/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:35:32 by lkirillo          #+#    #+#             */
/*   Updated: 2023/11/18 15:04:14 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <strings.h>*/
#include "libft.h"

void	ft_bzero(void *str, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = 0;
		i++;
	}
}

/*int main ()
{
	char str[50];
   strcpy(str,"This is a function");
   puts(str);

   bzero(str,2);
   puts(str);

	ft_bzero(str,2);
   puts(str);
   
   return(0);
}*/