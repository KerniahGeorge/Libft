/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kergeorg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 14:03:33 by kergeorg          #+#    #+#             */
/*   Updated: 2019/04/12 14:58:12 by kergeorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			s[i++] = '\0';
		}
	}
}