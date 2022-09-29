/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:10:54 by ebaraton          #+#    #+#             */
/*   Updated: 2022/04/11 12:20:26 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>

static int	ft_checkstart(const char *s1, const char *set)
{
	int	start;
	int	j;

	start = 0;
	j = 0;
	while (set[j])
	{
		if (s1[start] != set[j])
			j++;
		else
		{
			start++;
			j = 0;
		}
	}
	return (start);
}

static int	ft_checkend(const char *s1, const char *set)
{	
	int	end;
	int	j;

	end = ft_strlen(s1);
	j = 0;
	while (set[j])
	{
		if (s1[end] != set[j])
			j++;
		if (s1[end] == set[j])
		{
			end--;
			j = 0;
		}
	}	
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		start;
	int		end;

	i = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (NULL);
	start = ft_checkstart(s1, set);
	end = ft_checkend(s1, set);
	if (end < start)
		return (ft_strdup(""));
	s2 = malloc (sizeof(char) * (end - start) + 2);
	if (s2 == NULL)
		return (NULL);
	while (start <= end)
	{
		s2[i] = s1[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int	main()
{
	char	s1[] = "abcdba";
	char	set[] = "acb";

	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}*/
