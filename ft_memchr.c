/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastel <rcastel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:10:30 by rcastel           #+#    #+#             */
/*   Updated: 2025/11/04 16:40:12 by rcastel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				count;
	const unsigned char	*p;

	count = 0;
	p = s;
	c = c % 256;
	if (c < 0)
		c += 256;
	while (count != n)
	{
		if (p[count] == c)
			return ((void *)(s + count));
		count++;
	}
	return (NULL);
}
