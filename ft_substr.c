/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastel <rcastel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:12:52 by rcastel           #+#    #+#             */
/*   Updated: 2025/11/05 13:53:24 by rcastel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	count;

	res = malloc(len + 1);
	if (res == NULL)
		return (NULL);
	count = 0;
	while (s[count] && (count != start))
		count++;
	while (s[count] && (count != (start + len)))
	{
		res[count - start] = s[count];
		count++;
	}
	res[count - start] = 0;
	return (res);
}
