/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:09:35 by nlehmeye          #+#    #+#             */
/*   Updated: 2023/08/08 10:09:36 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_u(unsigned int u, int *len)
{
	if (u > 9)
		ft_u(u / 10, len);
	ft_c(u % 10 + '0', len);
}