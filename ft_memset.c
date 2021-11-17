/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:31:45 by fstitou           #+#    #+#             */
/*   Updated: 2021/11/06 20:40:10 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s1, int c, size_t n)
{
	unsigned char	*str;

	str = s1;
	while (n != 0)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
	return (s1);
}
