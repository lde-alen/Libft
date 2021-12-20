/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen < lde-alen@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 09:34:27 by lde-alen          #+#    #+#             */
/*   Updated: 2021/12/19 23:06:30 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION:
		The ft_isdigit function tests for a decimal digit character. Regardless 
		of locale in the ASCII character set, this includes the following characters 
		(preceded by their numeric values, in decimal)::
			48		``0''	49	``1''	50	``2''	51	``3''	52	``4''
			53		``5''	54	``6''	55	``7''	56	``8''	57	``9''
	
	RETURN VALUES:
		The ft_isdigit functions return zero if the character tests
		false and return one if the character tests true.
*/

/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int	ft_isdigit(int c)
{
	unsigned char	asc;

	asc = (unsigned int)c;
	if (asc >= '0' && asc <= '9')
		return (1);
	else
		return (0);
}
