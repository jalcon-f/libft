/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:11:40 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/03 02:20:55 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	int	y;

	if (*needle == '\0')
		return ((char *)haystack);
	x = 0;
	while (haystack[x] != '\0' && x < len)
	{
		y = 0; 
		while (haystack[x + y] == needle[y] && (x + y) < len && needle[y] != '\0')
		{
			y++;
			if (needle[y] == '\0')
				return((char *)&haystack[x]);
		}
		x++;
	}
	return (0);
}
