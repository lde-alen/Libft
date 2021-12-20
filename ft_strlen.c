/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen < lde-alen@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 10:31:03 by lde-alen          #+#    #+#             */
/*   Updated: 2021/12/19 12:31:02 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	INCLUDES:
		#include <string.h>
	
	DESCRIPTION:
		The strlen function computes the length of the string s.

	RETURN VALUES:
		The ft_strlen function returns the number of characters that the precede
		NUL character.
*/

/**
 * @brief 
 * 
 * @param str 
 * @return size_t 
 */
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
