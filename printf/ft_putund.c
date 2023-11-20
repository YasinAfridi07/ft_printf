/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putund.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:40:26 by yusman            #+#    #+#             */
/*   Updated: 2022/12/25 18:15:43 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putund(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
	{
		len += ft_putund(n / 10);
	}
	len += ft_putchar((n % 10) + '0');
	return (len);
}

// int main()
// {
// 	printf("%d", ft_putund(-1500000));
// }
