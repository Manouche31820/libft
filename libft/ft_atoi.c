/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:54:21 by ebaraton          #+#    #+#             */
/*   Updated: 2022/03/30 18:22:24 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

static int	ft_isspace(const char *nptr, int i)
{
	if (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v'
		|| nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	a;
	int	signe;

	signe = 1;
	a = 0;
	i = 0;
	while (ft_isspace(nptr, i) == 1)
		i++;
	if (nptr[i] == '-')
	{
		signe = (signe * -1);
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
		a = a * 10 + nptr[i++] - 48;
	a = a * signe;
	return (a);
}

/*int	main()
{
	char *nptr = "+-42";
	printf("%d\n", ft_atoi(nptr));
	return (0);
}*/
