/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen < lde-alen@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 12:00:02 by lde-alen          #+#    #+#             */
/*   Updated: 2021/12/19 21:16:10 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * 
 * @param dst 
 * @param src 
 * @param dstsize 
 * @return size_t 
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*tmp_src;
	size_t	len_dest;
	size_t	len_src;
	size_t	total;
	size_t	i;

	tmp_src = (char *)src;
	len_src = ft_strlen(tmp_src);
	len_dest = ft_strlen(dst);
	total = 0;
	i = 0;
	if (dstsize > len_dest)
		total = len_src + len_dest;
	else
		total = len_src + dstsize;
	while (tmp_src[i] && (len_dest + 1) < dstsize)
	{
		dst[len_dest] = tmp_src[i];
		len_dest++;
		i++;
	}
	dst[len_dest] = '\0';
	return (total);
}