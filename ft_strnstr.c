/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastel <rcastel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:10:30 by rcastel           #+#    #+#             */
/*   Updated: 2025/11/04 15:10:41 by rcastel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	valid_digits;
	size_t	count;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	valid_digits = 0;
	count = 0;
	while (big[count] && (count != len))
	{
		if (big[count] != little[valid_digits])
			valid_digits = 0;
		if (big[count] == little[valid_digits])
			valid_digits++;
		if (valid_digits == little_len)
			return ((char *)(big + count - little_len + 1));
		count++;
	}
	return (NULL);
}
