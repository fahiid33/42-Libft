/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:23:54 by fstitou           #+#    #+#             */
/*   Updated: 2021/11/15 04:39:25 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	i;
	long	n;
	long	res;
	int		p;

	i = 0;
	n = 1;
	res = 0;
	p = 0;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		n = -1;
		p = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	if (i > 21)
		return (p - 1);
	return (res * n);
}
