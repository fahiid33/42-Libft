/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:34:30 by fstitou           #+#    #+#             */
/*   Updated: 2021/11/06 20:37:11 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *)s);
	if (s == NULL)
		return (NULL);
	while (len != 0 && s[len] != (char) c)
		len--;
	if (s[len] == (char)c)
		return ((char *)s + len);
	return (NULL);
}
