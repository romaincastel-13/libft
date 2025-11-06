/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastel <rcastel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:10:30 by rcastel           #+#    #+#             */
/*   Updated: 2025/11/05 18:02:21 by rcastel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_isdigit(int c);

static int	ft_is_space(int c)
{
	return ((32 == c) || ((c > 8) && (c < 14)));
}

static long	ft_trunc_pos_atoi(const char *nptr)
{
	long	ret;

	ret = 0;
	while (*nptr)
	{
		if (!ft_isdigit(*nptr))
			break ;
		ret *= 10;
		ret += (*nptr - '0');
		nptr++;
	}
	return (ret);
}

int	ft_atoi(const char *nptr)
{
	int	neg;

	neg = 1;
	while (*nptr)
	{
		if (ft_is_space(*nptr))
			nptr++;
		else
			break ;
	}
	if (*nptr == '+')
		nptr++;
	else if (*nptr == '-')
	{
		neg = -1;
		nptr++;
	}
	return (neg * ft_trunc_pos_atoi(nptr));
}
