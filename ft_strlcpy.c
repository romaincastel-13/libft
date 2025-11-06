/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastel <rcastel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:10:30 by rcastel           #+#    #+#             */
/*   Updated: 2025/11/05 16:05:30 by rcastel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	if (size == 0)
		return (ft_strlen(src));
	else
	{
		count = 0;
		while ((src[count]) && (count != (size - 1)))
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = 0;
	}
	return (ft_strlen(src));
}
