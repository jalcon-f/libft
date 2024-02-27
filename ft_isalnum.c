/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:41:03 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/17 12:55:00 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*int	main(void)
{
	char	testChar = '.';
	if (ft_isalnum(testChar))
	{
		printf("%c es correcto. \n", testChar);
	}
	else
	{
		printf("%c no es correcto. \n", testChar);
	}
	return (0);
}*/
