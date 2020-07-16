/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blsiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:39:56 by blsiband          #+#    #+#             */
/*   Updated: 2020/07/10 09:43:41 by blsiband         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void   ft_putchar(char c);

void   ft_print_numbers(void) {
	char start;
	char end;

	start ='0';
	end ='9';
	while (start <=end) {
		ft_putchar(start);
		start++
	}
}

