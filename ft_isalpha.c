/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:38:17 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/17 12:50:25 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*int	main(void)
{
	char	testChar = '1';
	if	(ft_isalpha(testChar)){
		printf("%c es una letra. \n", testChar);
	}
	else
	{
		printf("%c no es una letra. \n", testChar);
	}
	return (0);
}*/
