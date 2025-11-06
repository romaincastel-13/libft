/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastel <rcastel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:10:30 by rcastel           #+#    #+#             */
/*   Updated: 2025/11/04 18:12:20 by rcastel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	count;

	count = 0;
	if (dest < src)
	{
		while (count != n)
		{
			((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
			count++;
		}
	}
	else if (dest != src)
	{
		while (count != n)
		{
			((unsigned char *)dest)[n - 1 - count] = ((unsigned char *)src)[n
				- 1 - count];
			count++;
		}
	}
	return (dest);
}
