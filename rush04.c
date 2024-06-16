/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopes- <allopes-@42.student.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 15:01:22 by allopes-          #+#    #+#             */
/*   Updated: 2024/06/16 17:55:49 by allopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char put);

void	first_line(int collum, int y)
{
	if (collum == 1)
		ft_putchar('A');
	else if (collum == y)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	middle_line(int collum, int y)
{
	if (collum == 1 || collum == y)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	last_line(int collum, int y)
{
	if (collum == 1)
		ft_putchar('C');
	else if (collum == y)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	lines;
	int	collum;

	lines = 1;
	collum = 1;
	while (lines <= y)
	{
		while (collum <= x)
		{
			if (lines == 1)
				first_line(collum, x);
			else if (lines == y)
				last_line(collum, x);
			else
				middle_line(collum, x);
			collum++;
		}
		lines++;
		ft_putchar('\n');
		collum = 1;
	}
}
