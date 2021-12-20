/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen < lde-alen@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:02:18 by lde-alen          #+#    #+#             */
/*   Updated: 2021/12/19 23:13:24 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	asc;
	unsigned int	i;
	char			*str;

	asc = (unsigned char)c;
	i = 0;
	str = (char *) s;
	while (str[i] && str[i] != asc)
	{
		if (str[i] == asc)
			return ((char *)s + i);
		i++;
	}
	if (str[i] == asc)
		return ((char *)s + i);
	return (NULL);
}
