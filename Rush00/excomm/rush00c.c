/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorefice <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:15:18 by aorefice          #+#    #+#             */
/*   Updated: 2022/09/03 13:26:01 by aorefice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void middle(int x, int y)

{
	int i;
	int count;

	if (y > 1)
	{
		count = 0;
		while (count < (y - 2))
		{
			ft_putchar('\n');
			ft_putchar('*');
			i = 0;
			while (i < (x - 2))
			{
				ft_putchar(' ');
				++i;

			}
			if (x > 1)
				ft_putchar('*');
			++count;
		}
	}
}
