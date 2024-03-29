/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:11:35 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/17 12:59:29 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int	main(void)
{
	int	testChar = '0xF1';
	if (ft_isascii(testChar))
	{
		printf("%c esta dentro de ASCII. \n", testChar);
	}
	else
	{
		printf("%c no esta dentro de ASCII. \n", testChar);
	}
	return (0);
}*/
