/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorefice <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 02:22:35 by aorefice          #+#    #+#             */
/*   Updated: 2022/09/07 02:27:34 by aorefice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)

{	
	write(1, &c, 1);
}

/*
int main()

{
	ft_putchar('c');
	ft_putchar('\n');
	return (0);
}
*/
