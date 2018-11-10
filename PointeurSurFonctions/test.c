/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 18:22:37 by struxill          #+#    #+#             */
/*   Updated: 2018/11/10 19:37:43 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef void (*funptr)(char);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_funcall(void (*f)(char), char *tab)
{
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		(*f)(tab[i]);
		i++;
	}
}

//void	ft_funcall2(

int	main(void)
{
	int x;
	int *y;
	char tab[4] = { 'a', 'b', 'c' };

//	tab[3] = '\0';
	//void (*f)(char);
	funptr	f;
	f = &ft_putchar;
	f('z');
	ft_putchar('\n');
	ft_funcall(ft_putchar, tab);

	x = 42;
	y = &x;
	*y = 0;
	

}
