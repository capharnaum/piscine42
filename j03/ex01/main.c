/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 12:31:51 by larmand           #+#    #+#             */
/*   Updated: 2016/02/15 13:34:41 by larmand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int		nombre;
	int		*ptr1;
	int		**ptr2;
	int		***ptr3;
	int		****ptr4;
	int		*****ptr5;
	int		******ptr6;
	int		*******ptr7;
	int		********ptr8;
	int		*********ptr9;
	
	nombre = 22;
	ptr1 = &nombre;
	ptr2 = ptr1;
	ptr3 = ptr2;
	ptr4 = ptr3;
	ptr5 = ptr4;
	ptr6 = ptr5;
	ptr7 = ptr6;
	ptr8 = ptr7;
	ptr9 = ptr8;
	ft_ultimate_ft(ptr9);
	printf("nombre : %p\n", &ptr9);
	printf("nombre : %d\n");
	return (0);
}
