/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:06:59 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/10 20:51:13 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			new_str[j] = s[i];
			j++;
		}
		i++;
	}
	new_str[j] = 0;
	return (new_str);
}
/*
int	main(void)
{
	const char	*original = "Hola Mundo";
	char	*subcadena = ft_substr(original, 5, 5);

	if (subcadena != NULL)
	{
		printf("Subcadena: %s\n", subcadena);
	}
	else
	{
		printf("Error al crear la subcadena.\n");
	}
	return (0);
}*/
