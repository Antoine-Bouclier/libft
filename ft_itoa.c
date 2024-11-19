/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouclie <abouclie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:54:12 by abouclie          #+#    #+#             */
/*   Updated: 2024/11/18 15:44:56 by abouclie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	if (n <= 9)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		size;
	long	nbr;
	char	*str;

	i = 0;
	nbr = n;
	size = ft_intlen(nbr);
	str = malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[i] = '-';
		nbr *= -1;
		i++;
	}
	str[size] = '\0';
	while (size-- > i)
	{
		str[size] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (str);
}
