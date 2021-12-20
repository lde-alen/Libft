/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen < lde-alen@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 21:17:57 by lde-alen          #+#    #+#             */
/*   Updated: 2021/12/19 23:41:48 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int	ft_tolower(int c)
{
	unsigned int	asc;

	asc = c;
	if (asc >= 'A' && asc <= 'Z')
		asc += 32;
	return (asc);
}