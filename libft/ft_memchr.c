/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:10:38 by ebaraton          #+#    #+#             */
/*   Updated: 2022/04/11 16:53:08 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	d;

	i = 0;
	d = c;
	if (n == 0)
		return (NULL);
	while (i <= n - 1)
	{
		if (((unsigned char *)s)[i] == d)
			return (&((unsigned char *)s)[i]);
		else
			i++;
	}
	return (NULL);
}		
