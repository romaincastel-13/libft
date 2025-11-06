/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastel <rcastel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:11:46 by rcastel           #+#    #+#             */
/*   Updated: 2025/11/05 17:36:04 by rcastel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *s);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	count;

	res = malloc(ft_strlen(s) + 1);
	if (NULL == res)
		return (NULL);
	count = 0;
	while (s[count])
	{
		res[count] = (*f)(count, s[count]);
		count++;
	}
	res[count] = 0;
	return (res);
}
