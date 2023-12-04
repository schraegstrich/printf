/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:50:31 by lkirillo          #+#    #+#             */
/*   Updated: 2023/12/04 21:02:58 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_printchar(va_list pchar)
{
	char	*p;

	p = (char *)malloc(sizeof(char));
	if (!p)
		return (0);
	*p = (char)va_arg(pchar, int);
	//if (*p >= '\0' && *p <= '\x7F')
	if (*p >= 32 && *p <= 126)
	{
		write(1, p, 1);
	}
	free(p);
	return (*p);
}

