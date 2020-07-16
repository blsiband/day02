/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blsiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:30:40 by blsiband          #+#    #+#             */
/*   Updated: 2020/07/10 09:36:14 by blsiband         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putchar(char c);

void    ft_print_reverse_alphabet(void) {
	char  start;
	char  end;

	start ='z';
	end ='a';
	while (start >=end) {
		ft_putchar(start);
		start++
	}
}
