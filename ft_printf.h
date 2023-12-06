/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:29:49 by lkirillo          #+#    #+#             */
/*   Updated: 2023/12/06 16:59:46 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_printchar(char p);
int		ft_printstr(char *str);
char	*ft_fake_itoa(unsigned int n);
char	*ft_hex_itoa(unsigned int n);
char	*ft_str_tolower(char *s);
char	*ft_print_ptr(unsigned long long n);

#endif
