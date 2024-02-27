/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 04:48:04 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/17 15:51:17 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*void	funcion_prueba(unsigned int i, char *str)
{
	printf("Indice: %u, Caracter: %c\n", i, *str);
}
int	main(void)
{
	char str[] = "Hola Mundo";
	ft_striteri(str, &funcion_prueba);
	return (0);
}*/
