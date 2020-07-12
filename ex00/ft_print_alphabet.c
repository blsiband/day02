/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blsiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:20:00 by blsiband          #+#    #+#             */
/*   Updated: 2020/07/10 09:25:37 by blsiband         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  ft_putchar(char c);

void  ft_print_alphabet(void) {
	char  start;
	char  end;

	start ='a';
	end ='z'
		while(start <=end) {
			ft_putchar(start);
			start++
		}
}
