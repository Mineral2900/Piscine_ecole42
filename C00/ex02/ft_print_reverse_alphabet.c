/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorefice <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 02:26:10 by aorefice          #+#    #+#             */
/*   Updated: 2022/09/07 02:28:22 by aorefice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void 	ft_print_reverse_alphabet(void)

{
	write(1, "zyxwvutsrqponmlkjihgfedcba\n", 27);
}

int main()

{
	ft_print_reverse_alphabet();
	return (0);
}
