/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 00:14:02 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/10 23:09:51 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*nueva;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	nueva = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!nueva)
		return (NULL);
	ft_strlcpy(nueva, s1, s1_len + 1);
	ft_strlcpy((nueva + s1_len), s2, s2_len + 1);
	return (nueva);
}
/*
int	main(void)
{
	const char	*cadena1 = "Hola ";
	const char	*cadena2 = "Mundo";

	char *resultado = ft_strjoin(cadena1, cadena2);

	if (resultado != NULL)
	{
		printf("Resultado: %s\n", resultado);
	}
	else
	{
		printf("Error.\n");
	}
	return (0);
}*/
