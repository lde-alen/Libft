/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen < lde-alen@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 23:50:22 by lde-alen          #+#    #+#             */
/*   Updated: 2021/12/20 18:28:10 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The ft_memchr function locates the first occurrence of c (converted
 * to an unsigned char) in string s. The function returns a pointer to the byte
 * located, or NULL if no such byte exists within n bytes.
 * 
 * @param s 
 * @param c 
 * @param n 
 * @return void* 
 */
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
