/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen < lde-alen@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 10:00:08 by lde-alen          #+#    #+#             */
/*   Updated: 2021/12/19 23:06:25 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION:
		The ft_isascii function tests for an ASCII character, which is any character
		between 0 and decimal 127 inclusive.
	
	RETURN VALUES:
		The ft_isascii functions return zero if the character tests
		false and return one if the character tests true.
*/

/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int	ft_isascii(int c)
{
	unsigned char	asc;

	asc = c;
	if (asc >= 0 && asc <= 127)
		return (1);
	else
		return (0);
}
