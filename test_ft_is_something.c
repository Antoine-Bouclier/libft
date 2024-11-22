/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_is_something.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouclie <abouclie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:04:50 by lmaria            #+#    #+#             */
/*   Updated: 2024/11/21 15:29:10 by abouclie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <stdio.h>

void	test_ft_isalnum(void)
{
	assert(ft_isalnum('A') == 1);
	assert(ft_isalnum('Z') == 1);
	assert(ft_isalnum('a') == 1);
	assert(ft_isalnum('z') == 1);
	assert(ft_isalnum('1') == 1);
	assert(ft_isalnum('!') == 0);
	assert(ft_isalnum(' ') == 0);
	assert(ft_isalnum('$') == 0);
	assert(ft_isalnum('.') == 0);
	assert(ft_isalnum('\t') == 0);
	assert(ft_isalnum('\n') == 0);
	assert(ft_isalnum(200) == 0);
	assert(ft_isalnum(157) == 0);
	printf("ft_isalnum : ✅\n");
}

void	test_ft_isalpha(void)
{
	assert(ft_isalpha('A') == 1);
	assert(ft_isalpha('Z') == 1);
	assert(ft_isalpha('a') == 1);
	assert(ft_isalpha('z') == 1);
	assert(ft_isalpha('1') == 0);
	assert(ft_isalpha('!') == 0);
	assert(ft_isalpha(' ') == 0);
	assert(ft_isalpha('$') == 0);
	assert(ft_isalpha('.') == 0);
	assert(ft_isalpha('\t') == 0);
	assert(ft_isalpha('\n') == 0);
	assert(ft_isalpha(200) == 0);
	assert(ft_isalpha(157) == 0);
	printf("ft_isalpha : ✅\n");
}

void	test_ft_isascii(void)
{
	assert(ft_isascii('A') == 1);
	assert(ft_isascii('Z') == 1);
	assert(ft_isascii('a') == 1);
	assert(ft_isascii('z') == 1);
	assert(ft_isascii('1') == 1);
	assert(ft_isascii('!') == 1);
	assert(ft_isascii(' ') == 1);
	assert(ft_isascii('$') == 1);
	assert(ft_isascii('.') == 1);
	assert(ft_isascii('\t') == 1);
	assert(ft_isascii('\n') == 1);
	assert(ft_isascii(200) == 0);
	assert(ft_isascii(157) == 0);
	printf("ft_isascii : ✅ \n");
}

void	test_ft_isdigit(void)
{
	assert(ft_isdigit('A') == 0);
	assert(ft_isdigit('Z') == 0);
	assert(ft_isdigit('a') == 0);
	assert(ft_isdigit('z') == 0);
	assert(ft_isdigit('1') == 1);
	assert(ft_isdigit('!') == 0);
	assert(ft_isdigit(' ') == 0);
	assert(ft_isdigit('$') == 0);
	assert(ft_isdigit('.') == 0);
	assert(ft_isdigit('\t') == 0);
	assert(ft_isdigit('\n') == 0);
	assert(ft_isdigit(200) == 0);
	assert(ft_isdigit(157) == 0);
	printf("ft_isdigit : ✅ \n");
}

void	test_ft_isprint(void)
{
	assert(ft_isprint('A') == 1);
	assert(ft_isprint('Z') == 1);
	assert(ft_isprint('a') == 1);
	assert(ft_isprint('z') == 1);
	assert(ft_isprint('1') == 1);
	assert(ft_isprint('!') == 1);
	assert(ft_isprint(' ') == 1);
	assert(ft_isprint('$') == 1);
	assert(ft_isprint('.') == 1);
	assert(ft_isprint('\t') == 0);
	assert(ft_isprint('\n') == 0);
	assert(ft_isprint(200) == 0);
	assert(ft_isprint(157) == 0);
	printf("ft_isprint : ✅\n");
}

int	main(void)
{
	printf("--- Test function Is ---\n");
	test_ft_isalpha();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isdigit();
	test_ft_isprint();
	return (0);
}
