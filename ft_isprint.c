/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:12:16 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/17 13:02:01 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

/*int	main(void)
{
	char	testChar = '\t';
	if (ft_isprint(testChar))
	{
		printf("%c es printable. \n", testChar);
	}
	else
	{
		printf("%c no es printable. \n", testChar);
	}
	return (0);
}*/
