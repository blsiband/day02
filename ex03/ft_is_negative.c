/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blsiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:44:41 by blsiband          #+#    #+#             */
/*   Updated: 2020/07/10 10:29:36 by blsiband         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void  ft_putchar(char c);

void  ft_is_negative(int n) {
	if (n<0) {
		ft_putchar('N');
		n = -n;
	}
}

