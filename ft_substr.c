/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen < lde-alen@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 03:21:49 by lde-alen          #+#    #+#             */
/*   Updated: 2021/12/20 03:21:50 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	str_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen((char *)s);
	if (str_len - 1 < start)
		return (ft_strdup(""));
	str_len = ft_strlen((char *)&s[start]);
	if (str_len < len)
		str_len++;
	else
		str_len = len + 1;
	sub = ft_calloc(str_len, sizeof(char));
	if (sub)
		ft_strlcpy(sub, &s[start], str_len);
	return (sub);
}
