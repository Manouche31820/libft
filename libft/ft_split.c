/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:07:17 by ebaraton          #+#    #+#             */
/*   Updated: 2022/04/11 12:55:44 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_countstr(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**t;
	int		j;
	int		i;
	int		tmp;

	if (!s)
		return (NULL);
	t = malloc(sizeof(char *) * ft_countstr(s, c) + 1);
	if (!t)
		return (NULL);
	j = 0;
	i = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		tmp = i;
		while (s[i] != c && s[i])
			i++;
		t[j++] = ft_substr(s, tmp, i - tmp);
		while (s[i] == c && s[i])
			i++;
	}
	t[j] = NULL;
	return (t);
}
/*
int	main()
{
	char	**t;
	t = ft_split("salut", 'a');
	printf("%s\n", t[0]);
	return (0);

}*/
