/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kergeorg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 19:37:05 by kergeorg          #+#    #+#             */
/*   Updated: 2019/04/02 18:45:53 by kergeorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b])
	{
		s1[a + b] = s2[b];
		b++;
	}
	s1[a + b] = '\0';
	return (s1);
}
