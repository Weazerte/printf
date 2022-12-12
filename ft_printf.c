/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:14:38 by eaubry            #+#    #+#             */
/*   Updated: 2022/12/12 16:15:33 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	int	i;
	int	res;
	va_list parametersInfos;
	va_start( parametersInfos, str);

	i = 0;
	res = 0;
	while(str[i] != '\0')
	{
		if(str[i] != '%')
		{
			res += ft_putchar(str[i]);
			i++;
			continue;
		}
		i++;
		res += ft_display(parametersInfos, str[i]);
		i++;
	}
	return (res);
}
