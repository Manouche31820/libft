/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:37:09 by ebaraton          #+#    #+#             */
/*   Updated: 2022/04/11 16:52:27 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize < 1)
		return (ft_strlen((char *)src));
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = ((char *)src)[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen((char *)src));
}

/*int main()
{
	char *dst = NULL;
	const char *src;
	size_t dstsize;

	dstsize = 5;
	src = "hellososdfnsdljn";
	printf("%s\n", ft_strlcpy(dst, src, 5));
	return (0);
}*/
