/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastel <rcastel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:54:51 by rcastel           #+#    #+#             */
/*   Updated: 2025/11/05 17:06:00 by rcastel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static int	fill_revdigits(char rdigits[11], long n)
{
	int	count;

	count = 0;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		rdigits[count++] = (n % 10) + '0';
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	i_res;
	char	reversed_digits[11];
	int		i_rdigits;

	res = malloc(12);
	if (NULL == res)
		return (NULL);
	i_res = 0;
	i_rdigits = 0;
	if (0 == n)
		res[i_res++] = '0';
	else if (n < 0)
		res[i_res++] = '-';
	i_rdigits = fill_revdigits(reversed_digits, n);
	while (i_rdigits != 0)
		res[i_res++] = reversed_digits[--i_rdigits];
	res[i_res] = 0;
	return (res);
}
