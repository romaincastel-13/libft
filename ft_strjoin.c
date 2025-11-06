/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastel <rcastel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:45:18 by rcastel           #+#    #+#             */
/*   Updated: 2025/11/05 18:40:41 by rcastel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	count;

	res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (NULL == res)
		return (NULL);
	count = 0;
	while (s1[count])
	{
		res[count] = s1[count];
		count++;
	}
	while (*s2)
	{
		res[count++] = *s2;
		s2++;
	}
	res[count] = 0;
	return (res);
}
