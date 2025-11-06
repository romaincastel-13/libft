/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastel <rcastel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:10:07 by rcastel           #+#    #+#             */
/*   Updated: 2025/11/05 15:53:28 by rcastel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

size_t			ft_strlen(const char *s);

static int	is_myc_or_0(char c, char myc)
{
	return ((c == myc) || (c == 0));
}

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		not_at_begining;

	count = 0;
	not_at_begining = 0;
	while (*s)
	{
		if ((*s == c) && not_at_begining && !is_myc_or_0(*(s + 1), c))
			count++;
		if (!not_at_begining && (*s != c))
		{
			not_at_begining = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static size_t	word_length(char const *s, char c, size_t *p_index)
{
	size_t	count;

	count = 0;
	while (s[*p_index + count] && (s[*p_index + count] != c))
		count++;
	return (count);
}

static char	*next_word(char const *s, char c, size_t *p_index)
{
	char	*res;
	size_t	i_res;

	res = malloc(word_length(s, c, p_index) + 1);
	if (NULL == res)
		return (NULL);
	i_res = 0;
	while (s[*p_index] && (s[*p_index] != c))
	{
		res[i_res] = s[*p_index];
		(*p_index)++;
		i_res++;
	}
	res[i_res] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i_res;
	size_t	i_s;
	size_t	*p_i_s;

	res = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (NULL == res)
		return (NULL);
	i_res = 0;
	i_s = 0;
	p_i_s = &i_s;
	while (s[i_s])
	{
		if (s[i_s] != c)
			res[i_res++] = next_word(s, c, p_i_s);
		else
			i_s++;
	}
	res[i_res] = NULL;
	return (res);
}
