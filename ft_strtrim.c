/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastel <rcastel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:08:58 by rcastel           #+#    #+#             */
/*   Updated: 2025/11/05 19:55:21 by rcastel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t		ft_strlen(const char *s);

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i_res;
	int		inset_sequence;

	res = malloc(ft_strlen(s1) + 1);
	if (NULL == res)
		return (NULL);
	i_res = 0;
	inset_sequence = 0;
	while (*s1)
	{
		if (is_in_set(*s1, set))
			inset_sequence++;
		else
			inset_sequence = 0;
		if (i_res || !inset_sequence)
			res[i_res++] = *s1;
		s1++;
	}
	res[i_res - inset_sequence] = 0;
	return (res);
}
