/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:20:34 by ebaraton          #+#    #+#             */
/*   Updated: 2022/04/11 11:05:01 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || (!s1 && !s2))
		return (0);
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && (i + 1 < n))
		i++;
	return ((((unsigned char *)s1)[i]) - (((unsigned char *)s2)[i]));
}

/*int main()
{
	char *s1 = "1234";
	char *s2 = "1235";
	int h;	
	printf("%d\n", ft_strncmp(s1, s2, 3));
	h = strncmp(s1, s2, 3);
	printf("%d\n", h);
	return (0);
}*/
