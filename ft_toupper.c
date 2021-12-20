/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen < lde-alen@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 21:18:00 by lde-alen          #+#    #+#             */
/*   Updated: 2021/12/20 04:10:13 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
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
