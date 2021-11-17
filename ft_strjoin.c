/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:28:04 by fstitou           #+#    #+#             */
/*   Updated: 2021/11/15 04:37:58 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s, char const *s1)
{
	int		i;
	int		len;
	int		len1;
	char	*str;

	len = ft_strlen(s);
	len1 = ft_strlen(s1);
	if (s || s1)
	{
		str = (char *)malloc(sizeof(char) * (len + len1 + 1));
		if (str == NULL)
			return (NULL);
		i = -1;
		while (s[++i])
			str[i] = s[i];
		i = -1;
		while (s1[++i])
		{
			str[len] = s1[i];
			len++;
		}
		str[len] = '\0';
		return (str);
	}
	return (0);
}
