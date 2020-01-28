/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_zero_o.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwitting <cwitting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 16:44:05 by cwitting          #+#    #+#             */
/*   Updated: 2020/01/28 11:28:15 by cwitting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int			print_zero_o(int *len)
{
	int		i;

	i = 0;
	while ((*len)-- > 0)
		i += write(1, "0", 1);
	return (i);
}