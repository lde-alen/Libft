/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen < lde-alen@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 09:48:19 by lde-alen          #+#    #+#             */
/*   Updated: 2021/12/19 23:33:05 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

/*
	DESCRIPTION:
		The ft_isalnum function tests for any character for which ft_isalpha
		or ft_isdigit is true.  The value of the argument must be 
		representable as an unsigned char or the value of EOF.

    		In the ASCII character set, this includes the following characters 
			(preceded by their numeric values, in decimal):
			65		``A''	66	``B''	67	``C''	68	``D''	69	``E''
    		70		``F''	71	``G''	72	``H''	73	``I''	74	``J''
    		75		``K''	76	``L''	77	``M''	78	``N''	79	``O''
    		80		``P''	81	``Q''	82	``R''	83	``S''	84	``T''
    		85		``U''	86	``V''	87	``W''	88	``X''	89	``Y''
    		90		``Z''	97	``a''	98	``b''	99	``c''	100	``d''
    		101		``e''	102	``f''	103	``g''	104	``h''	105	``i''
    		106 	``j''	107	``k''	108	``l''	109	``m''	110	``n''
    		111 	``o''	112	``p''	113	``q''	114	``r''	115	``s''
    		116 	``t''	117	``u''	118	``v''	119	``w''	120	``x''
    		121	 	``y''	122	``z''

			48		``0''	49	``1''	50	``2''	51	``3''	52	``4''
			53		``5''	54	``6''	55	``7''	56	``8''	57	``9''
	
	RETURN VALUES:
		The ft_isalnum function returns zero if the character tests false and 
		returns one if the character tests true.
*/

/**
 * @brief 
 * 	if false return 0; if true return 1.
 * @param int
 * @return int
 */
int	ft_isalnum(int c)
{
	unsigned char	asc;

	asc = c;
	if ((isalpha(asc) == 1) || (isdigit(asc) == 1))
		return (1);
	else
		return (0);
}
