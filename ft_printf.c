/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weaz <weaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:14:38 by eaubry            #+#    #+#             */
/*   Updated: 2022/12/16 15:09:48 by weaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		res;
	va_list	parametersinfos;

	if (!str)
		return (NULL);
	va_start(parametersinfos, str);
	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			res += ft_putchar(str[i]);
			i++;
			continue ;
		}
		i++;
		res += ft_display(parametersinfos, str[i]);
		i++;
	}
	va_end(parametersinfos);
	return (res);
}
