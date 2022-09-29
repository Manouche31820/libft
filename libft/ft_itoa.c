/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:50:26 by ebaraton          #+#    #+#             */
/*   Updated: 2022/04/11 13:00:52 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_count(int n)
{	
	int	count;

	count = 0;
	if (n < 0)
	{
		n = n * -1;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = ft_count(n);
	s = malloc(sizeof(char) * len + 1);
	if (!s)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		n = n * -1;
	}
	s[len--] = '\0';
	while (n && (n > 0))
	{
		s[len--] = 48 + (n % 10);
		n = n / 10;
	}
	return (s);
}
/*
int	main()
{
	int	n;

	n = 42;
	ft_itoa(n);
	//printf("%s\n", ft_itoa(n));
	return (0);
}*/
