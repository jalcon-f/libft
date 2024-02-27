/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 07:08:40 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/10 00:26:08 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!s1)
		return (NULL);
	if (!str)
		return (NULL);
	while (*s1)
		str[i++] = *s1++;
	str[i] = 0;
	return (str);
}
