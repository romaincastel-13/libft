/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastel <rcastel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:09:19 by rcastel           #+#    #+#             */
/*   Updated: 2025/11/05 10:44:26 by rcastel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	void	*cursor;

	res = malloc(nmemb * size);
	if (res == NULL)
		return (NULL);
	cursor = res;
	while (nmemb != 0)
	{
		while (size != 0)
		{
			*((unsigned char *)cursor) = 0;
			size--;
			cursor++;
		}
		nmemb--;
	}
	return (res);
}
