/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouclie <abouclie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:50:48 by abouclie          #+#    #+#             */
/*   Updated: 2024/11/18 15:11:10 by abouclie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		size;
	int		i;
	int		j;

	size = 1;
	i = 0;
	j = 0;
	size += ft_strlen(s1) + ft_strlen(s2);
	dest = malloc(size * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (i < size - 1)
	{
		while (s1[j] != '\0')
			dest[i++] = s1[j++];
		j = 0;
		while (s2[j] != '\0')
			dest[i++] = s2[j++];
	}
	dest[i] = '\0';
	return (dest);
}
