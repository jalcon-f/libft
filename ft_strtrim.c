/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 00:35:40 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/10 23:38:45 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + end +1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	str = malloc(end - start + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}

/*int	main(void)
{
	const char	*original = "  Hola Mundo  ";
	const char	*set = " ";

	char *recortado = ft_strtrim(original, set);

	if (recortado)
	{
		printf("Cadena original: \"%s\"\n", original);
		printf("Cadena resultante: \"%s\"\n", recortado);
	}
	else
	{
		printf("Error");
	}
	return (0);
}*/
