/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:53:23 by ebaraton          #+#    #+#             */
/*   Updated: 2022/04/11 16:51:59 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	h;

	i = 0;
	j = ft_strlen(dst);
	h = j;
	if (!dst && !src)
		return (0);
	if (dstsize <= j)
		return ((ft_strlen(src) + dstsize));
	while (src[i] != '\0' && (j + 1 < dstsize))
	{
		((char *)dst)[j] = ((char *)src)[i];
		i++;
		j++;
	}
	((char *)dst)[j] = '\0';
	return (ft_strlen(src) + h);
}
