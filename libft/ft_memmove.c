/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:35:00 by ebaraton          #+#    #+#             */
/*   Updated: 2022/04/11 16:54:02 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len - 1;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (i + 1)
		{	
			(((char *)dst)[i]) = (((char *)src)[i]);
			i--;
		}
	}
	else
	{	
		i = 0;
		while (i < len)
		{	
			(((char *)dst)[i] = ((char *)src)[i]);
			i++;
		}
	}	
	return (dst);
}

/*int main()
{
	//char dst [] = {67, 68, 67, 68, 69, 0, 45};
	//char src [] = {67, 67, 68, 68, 69, 0, 45};
	char dst [] = "Helloiiii";
	char src [] = "Caucou";

	//printf("%s\n", ft_memmove(dst + 1, src, 2));
	printf("%s\n", ft_memmove(dst, src, 2));
	printf("%s\n", memmove(dst, src, 2));
	//printf("%s\n", memmove(dst, src, 7));
	return (0);
}*/
