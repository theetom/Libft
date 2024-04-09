/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:06:05 by toferrei          #+#    #+#             */
/*   Updated: 2024/04/09 15:42:44 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	int	i;

	i = 0;
	if (('A' <= c && c <= 'Z')
		|| ('a' <= c && c <= 'z'))
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	printf("%d\n", isalpha('B'));
	printf("%d\n", ft_isalpha('A'));
} */