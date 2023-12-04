/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:50:31 by lkirillo          #+#    #+#             */
/*   Updated: 2023/12/04 20:00:29 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_printchar(va_list pchar)
{
	char	p;
	p = (char)va_arg(pchar, int);
	write (1, &p, 1);
	return (p);
}