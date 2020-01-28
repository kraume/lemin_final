/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwitting <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 13:44:42 by cwitting          #+#    #+#             */
/*   Updated: 2019/11/10 13:44:44 by cwitting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"

int		ft_isblank(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' \
			|| c == '\v' || c == '\r' || c == '\f')
		return (1);
	return (0);
}