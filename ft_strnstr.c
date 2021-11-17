/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:31:11 by fstitou           #+#    #+#             */
/*   Updated: 2021/11/13 21:30:00 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (*to_find == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] && (size_t) i < len)
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i] && str[i + j] == to_find[j] && (size_t)(i + j) < len)
			{
				j++;
				if (to_find[j] == '\0')
					return ((char *)str + i);
			}
		}
		i++;
	}
	return (0);
}
