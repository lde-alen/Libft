/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen < lde-alen@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 21:18:00 by lde-alen          #+#    #+#             */
/*   Updated: 2021/12/20 20:09:44 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a lower-case letter to the corresponding upper-case letter.
 * The argument must be representable as an unsigned char.
 * 
 * @param c 
 * @return int 
 */
int	ft_toupper(int c)
{
	unsigned int	asc;

	asc = c;
	if (asc >= 'a' && asc <= 'z')
		asc -= 32;
	return (asc);
}
