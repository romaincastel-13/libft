/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastel <rcastel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:10:30 by rcastel           #+#    #+#             */
/*   Updated: 2025/11/05 11:37:17 by rcastel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	char	*res;
	size_t	count;

	res = malloc(ft_strlen(s) + 1);
	if (res == NULL)
		return (NULL);
	count = 0;
	while (s[count])
	{
		res[count] = s[count];
		count++;
	}
	res[count] = 0;
	return (res);
}
