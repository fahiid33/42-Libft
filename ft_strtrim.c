/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:25:51 by fstitou           #+#    #+#             */
/*   Updated: 2021/11/17 03:55:13 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	first;
	size_t	last;

	if (!s1 || !set)
		return (0);
	first = 0;
	while (s1[first] != '\0' && ft_strchr(set, s1[first]))
		first++;
	last = ft_strlen((char *)s1 + first);
	if (last)
	{
		while (s1[first + last - 1] != '\0'
			&& ft_strchr(set, s1[first + last - 1]))
			last--;
	}
	str = (char *)malloc(sizeof(char) * last + 1);
	if (str == NULL)
		return (NULL);
	ft_strncpy(str, (char *)s1 + first, last);
	str[last] = '\0';
	return (str);
}
