/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:49:34 by ebaraton          #+#    #+#             */
/*   Updated: 2022/04/11 16:53:38 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strnstr(const char*s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2[j] == '\0')
		return ((char *)s1);
	while (s1[i])
	{
		while ((s1[i + j] == s2[j]) && (i + j < len))
		{
			if (s2[j + 1] == '\0')
				return (&((char *)s1)[i]);
			j++;
		}
	j = 0;
	i++;
	}
	return (NULL);
}
/*
int main()
{
	char *s1 = "hellolo";
	char *s2 = "lo";

	printf("%s\n", ft_strnstr(s1, s2, 7));
	printf("%s\n", strnstr(s1, s2, 7));
	return (0);
}*/
