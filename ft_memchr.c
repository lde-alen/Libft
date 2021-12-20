/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen < lde-alen@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 23:50:22 by lde-alen          #+#    #+#             */
/*   Updated: 2021/12/20 02:09:49 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	asc;
	unsigned char	*str;

	i = n;
	asc = (unsigned char)c;
	str = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (str[i] && i > 0)
	{
		if (str[i] == asc)
			return ((void *)s + i);
		i--;
	}
	if (str[i] == asc)
		return ((void *)s + i);
	return (NULL);
}
