/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorefice <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:11:13 by aorefice          #+#    #+#             */
/*   Updated: 2022/09/05 13:51:00 by aorefice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	int		counter;

	counter = 'a';
	while (counter <= 'z')
	{
		write(1, &counter, 1);
		counter++;
	}
}

/*
int main(void)

{
	ft_print_alphabet();
	return('0');
}
*/
