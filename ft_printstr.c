/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:02:27 by lkirillo          #+#    #+#             */
/*   Updated: 2023/12/04 20:07:43 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printstr(va_list pstr)
{
	char	*p;

	p = va_arg(pstr, char *);
	ft_putstr_fd(p, 1);
	return (p);
}
