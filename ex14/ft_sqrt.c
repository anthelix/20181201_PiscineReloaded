/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:58:24 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/08 11:48:14 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqr;

	sqr = 1;
	if (nb <= 0)
		return (0);
	while (sqr * sqr < nb)
	{
		sqr++;
		if (sqr * sqr == nb)
			return (sqr);
	}
	return (0);
}
