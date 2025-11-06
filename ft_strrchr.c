/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastel <rcastel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:10:30 by rcastel           #+#    #+#             */
/*   Updated: 2025/11/05 17:58:36 by rcastel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	count;
	int		found;

	count = 0;
	found = 0;
	while (*s)
	{
		if (*s == c)
		{
			count = 1;
			found = 1;
		}
		s++;
		count++;
	}
	if (c == 0)
		return ((char *)s);
	if (!found)
		return (NULL);
	return ((char *)(s - count + 1));
}
