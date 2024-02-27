/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:41:56 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/17 14:31:37 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	signo;
	int	resultado;

	i = 0;
	signo = 1;
	resultado = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		signo = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' & str[i] >= '0' && str[i] <= '9')
	{
		resultado *= 10;
		resultado += str[i] - '0';
		i++;
	}
	return (resultado * signo);
}

/*int	main(void)
{
	const char	*str = "42 is the answer";

	int resultado = ft_atoi(str);

	printf("Resultado: %d\n", resultado);

	return (0);
}*/
