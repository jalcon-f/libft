/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 04:36:35 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/14 23:38:15 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

static char	*be_conversion(int len)
{
	char	*temporal;

	temporal = malloc((len +1) * sizeof(char));
	if (!temporal)
		return (NULL);
	temporal[0] = '0';
	return (temporal);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*resultado;
	long	nbr;

	nbr = n;
	len = int_len(nbr);
	resultado = be_conversion(len);
	if (!resultado)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	i = len -1;
	while (nbr != 0)
	{
		resultado[i] = ((nbr % 10) + 48);
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
		resultado[0] = '-';
	resultado[len] = 0;
	return (resultado);
}

/*int	main(void)
{
	int	numero = 12345;

	char *cadena = ft_itoa(numero);
	if (cadena)
	{
		printf("Numero: %d\n", numero);
		printf("Cadena: %s\n", cadena);
	}
	else{
		printf("Error");
	}
	return (0);
}*/
