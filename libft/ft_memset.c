/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:40:12 by ebaraton          #+#    #+#             */
/*   Updated: 2022/04/11 11:09:16 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	d;
	size_t			i;

	i = 0;
	d = c;
	while (i < len)
	{
		((char *)b)[i] = d;
		i++;
	}
	return ((char *)b);
}
