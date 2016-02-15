/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 11:27:55 by larmand           #+#    #+#             */
/*   Updated: 2016/02/11 15:47:58 by larmand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int			i;
	long long	tmp;
	int			tab1[11];

	i = 0;
	tmp = nb;
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb < 0)
	{
		tmp = -tmp;
		ft_putchar('-');
	}
	while (tmp > 0)
	{
		tab1[i] = tmp % 10;
		tmp = tmp / 10;
		i++;
	}
	while (--i >= 0)
		ft_putchar(tab1[i] + '0');
}
