/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_recursif.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 21:08:05 by larmand           #+#    #+#             */
/*   Updated: 2016/02/15 21:46:07 by larmand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		if (n == -2147483648)
			write(1, "2147483648", 10);
		else
			ft_putnbr(-n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}

int	main(int argc, char **argv)
{
	printf("argc:%d\n", argc);
	int i = 0;
	while (i < argc)
	{
		printf("argv[%d]:%s\n", i, argv[i]);
		i++;
	}
	/*
	if (argc == 2)
	{
		ft_putnbr(atoi(argv[1]));
	}
	*/
	return (0);
}
