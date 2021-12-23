/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 11:40:39 by lde-alen          #+#    #+#             */
/*   Updated: 2021/12/23 13:29:25 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies n bytes from memory area src to memory area dst.  If dst and
 * src overlap, behavior is undefined.
 * 
 * @param dst 
 * @param src 
 * @param n 
 * @return void* 
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	const char		*tmp_src;
	char			*tmp_dest;

	tmp_src = src;
	tmp_dest = dst;
	i = 1;
	if (!(tmp_dest || tmp_src))
		return (NULL);
	while (i <= n)
	{
		*tmp_dest = *tmp_src;
		tmp_dest++;
		tmp_src++;
		i++;
	}
	return (dst);
}
