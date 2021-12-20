/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen < lde-alen@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 11:10:42 by lde-alen          #+#    #+#             */
/*   Updated: 2021/12/20 18:28:08 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes len bytes of value c (converted to an unsigned char) to the
 * string b and returns it.
 * 
 * @param b 
 * @param c 
 * @param len 
 * @return void*
 */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	tmp = b;
	if (b == NULL)
		return (NULL);
	while (i < len)
		tmp[i++] = (unsigned char) c;
	b = tmp;
	return (b);
}
