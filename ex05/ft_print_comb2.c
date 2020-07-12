/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blsiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 11:50:09 by blsiband          #+#    #+#             */
/*   Updated: 2020/07/12 12:02:09 by blsiband         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void  ft_putchar(char c);
void ft_print_digits(char a, char b);
{
	ft_putchar(a);
	ft_putchar(b);

	ft_putchar(',');
	ft_putchar(' ');
}

void  ft_print_comb2(void) {
	char a='0';
	char b='0';

	while(a < '9')
	{
		while(b < '9')
		{ 
			ft_print_digits(a, b);

		}
		b = 0;
		a++;
	}
}
