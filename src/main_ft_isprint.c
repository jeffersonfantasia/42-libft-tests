/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 21:15:37 by jfranchi          #+#    #+#             */
/*   Updated: 2021/05/25 21:22:44 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

void	main_ft_isprint(void)
{
	int var1 = 'k';
	int var2 = '8';
	int var3 = '\t';
	int var4 = ' ';

	if( isprint(var1) ) {
		printf("var1 = |%c| can be printed\n", var1 );
	} else {
		printf("var1 = |%c| can't be printed\n", var1 );
	}

	if( ft_isprint(var1) ) {
		printf("ft_var1 = |%c| can be printed\n", var1 );
	} else {
		printf("ft_var1 = |%c| can't be printed\n", var1 );
	}

	if( isprint(var2) ) {
		printf("var2 = |%c| can be printed\n", var2 );
	} else {
		printf("var2 = |%c| can't be printed\n", var2 );
	}

	if( ft_isprint(var2) ) {
		printf("ft_var2 = |%c| can be printed\n", var2 );
	} else {
		printf("ft_var2 = |%c| can't be printed\n", var2 );
	}

	if( isprint(var3) ) {
		printf("var3 = |%c| can be printed\n", var3 );
	} else {
		printf("var3 = |%c| can't be printed\n", var3 );
	}

	if( ft_isprint(var3) ) {
		printf("ft_var3 = |%c| can be printed\n", var3 );
	} else {
		printf("ft_var3 = |%c| can't be printed\n", var3 );
	}

	if( isprint(var4) ) {
		printf("var4 = |%c| can be printed\n", var4 );
	} else {
		printf("var4 = |%c| can't be printed\n", var4 );
	}

	if( ft_isprint(var4) ) {
		printf("ft_var4 = |%c| can be printed\n", var4 );
	} else {
		printf("ft_var4 = |%c| can't be printed\n", var4 );
	}
}