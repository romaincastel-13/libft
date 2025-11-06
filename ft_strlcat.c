/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastel <rcastel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:10:30 by rcastel           #+#    #+#             */
/*   Updated: 2025/11/03 19:13:08 by rcastel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_of_dst;
	size_t	count;

	len_of_dst = ft_strlen(dst);
	if (size <= len_of_dst)
		return (ft_strlen(src) + size);
	count = 0;
	while (src[count] && (len_of_dst + count != size - 1))
	{
		dst[len_of_dst + count] = src[count];
		count++;
	}
	dst[len_of_dst + count] = 0;
	return (len_of_dst + ft_strlen(src));
}
