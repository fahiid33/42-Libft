/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:24:29 by fstitou           #+#    #+#             */
/*   Updated: 2021/11/17 03:55:45 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_count(int n)
{
	long	i;
	long	j;

	j = (long)n;
	i = 0;
	if (j < 0)
	{
		i++;
		j *= -1;
	}
	while (j > 0)
	{
		j = j / 10;
		i++;
	}
	return (i);
}

static void	ft_intochar(char *str, long *i, long *k, long *j)
{
	while (*k != 0)
	{
		if ((*k) > 0)
		{
			str[(*i) - 1] = (*j) % 10 + '0';
			(*i)--;
			(*k) = (*k) / 10;
			(*j) = (*j) / 10;
		}
		if (*k < 0)
		{
			str[*i] = (*j) % 10 + '0';
			(*i)--;
			(*k) = (*k) / 10;
			(*j) = (*j) / 10;
		}
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	i;
	long	k;
	long	j;

	j = (long)n;
	k = j;
	i = ft_count(j);
	if (j == 0)
		return (ft_strdup("0"));
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	if (n < 0)
		i--;
	if (j < 0)
	{
		j *= -1;
		str[0] = '-';
		str[i + 1] = 0;
	}
	else
		str[i] = 0;
	ft_intochar(str, &i, &k, &j);
	return (str);
}
