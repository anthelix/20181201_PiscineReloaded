/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 09:32:15 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/12 13:36:54 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*k;

	k = NULL;
	i = 0;
	while (src[i] != '\0')
		i++;
	k = (char *)malloc(i * sizeof(char) + 1);
	i = 0;
	while (src[i] != '\0')
	{
		k[i] = src[i];
		i++;
	}
	k[i] = '\0';
	return (k);
}
