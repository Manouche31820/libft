/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:30:46 by ebaraton          #+#    #+#             */
/*   Updated: 2022/04/04 12:38:05 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (((char *)s)[i] == (char)c)
		{
			return (((char *)s) + i);
		}
		else if (((char *)s)[i] != c)
			i--;
	}
	return (NULL);
}
