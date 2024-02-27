/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:02:48 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/17 12:52:40 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int	main(void)
{
	char testChar = 'a';
	if (ft_isdigit(testChar))
	{
		printf("%c es un digito. \n", testcHAR);
	}
	ELSE
	{
		printf("%c no es un digito. \n", testChar);
	}
	return (0);
}*/
