/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorefice <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:52:05 by aorefice          #+#    #+#             */
/*   Updated: 2022/09/04 17:19:34 by aorefice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Rush00

void ft_putchar(char c);
void ft_print(int x, int l, int m, int r)

{
	int z;

	z = 0;
	if (x >= 1)
		ft_putchar(l);
	while (z < (x -2))
	{
		ft_putchar(m);
		z++;
	}
	if (x >= 2)
		ft_putchar(r);
	ft_putchar('\n');
}

void rush(int x, int y)

{
	int z;

	z = 0;

	if (y >+ 1 && x >1)
			ft_print(x, 'o', '-', 'o');
		while (z < (y -2) && x >=1)
		{
				ft_print(x, '|', ' ', '|');
				z++;
		}
		if (y >= 2)
			ft_print(x, 'o', '-', 'o');
}

*/

/* 
Rush01

void ft_putchar(char c);

void ft_print(int x, int l, int m, int r)

{
	int z;

	z = 0;
	if (x >= 1)
		ft_putchar(l);
	while (z < (x -2))
	{
		gt_putchar(m);
		z++;
	}
	if (x >= 2)
		ft_putchar(r);
	ft_putchar('\n');
}

void rush(int x, int y)

{
	int z;

	z = 0;
	if (y >+ 1 && x >1)
			ft_print(x, '/', '*', '\');
		while (z < (y -2) && x >=1)
		{
				ft_print(x, '*', ' ', '*');
				z++;
		}
		if (y >= 2)
			ft_print(x, '\', '*', '/');
}

*/
	

Rush02

void ft_putchar(char c);

void ft_print(int x, int l, int m, int r)

{
	int z;

	z = 0;
	if (x >= 1)
		ft_putchar(l);
	while (z < (x -2))
	{
		ft_putchar(m);
		z++;
	}
	if (x >= 2) 
		ft_putchar(r);
	ft_putchar('\n');
}

void rush(int x, int y)

{	
	int z;

	z = 0;
	if (y >+ 1 && x >1)
			ft_print(x, 'A', 'B', 'A');
		while (z < (y -2) && x >=1)
		{
				ft_print(x, 'B', ' ', 'B');
				z++;
		}
		if (y >= 2)
			ft_print(x, 'C', 'B', 'C');
}

/* 
Rush03

void ft_putchar(char c);

void ft_print(int x, int l, int m, int r)

{
	int z;

	z = 0;
	if (x >= 1)
		ft_putchar(l);
	while (z < (x -2))
	{
		ft_putchar(r);
	ft_putchar('\n');
}

void rush(int x, int y)

{	
	int z;

	z = 0;
	if (y >+ 1 && x >1)
		ft_print(x, 'A', 'B', 'C');
	while (z < (y -2) && x >=1)
	{
			ft_print(x, 'B', ' ', 'B');
			z++;
	}
	if (y >= 2)
		ft_print(x, 'A', 'B', 'C');
}
*/

/*
Rush04

void ft_putchar(char c);

void ft_putchar(int x, int l, int m, int r)

{
	int z;

	z = 0;
	if (x >= 1)
		ft_putchar(l);
	while (z < (x -2))
	{
		ft_putchar(r);
	ft_putchar('\n');
}

void rush(int x, int y)

{
	int z;

	z = 0;
	if (y >+ 1 && x >1)
		ft_print(x, 'A', 'B', 'C');
	while (z < (y -2) && x >=1)
	{
			ft_print(x, 'B', ' ', 'B');
			z++;
	}
	if (y >= 2)
		ft_print(x, 'C', 'B', 'A');
}
*/



