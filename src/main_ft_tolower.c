/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 21:19:29 by jfranchi          #+#    #+#             */
/*   Updated: 2021/05/25 23:37:03 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

void	main_ft_tolower(void)
{
	int	ch;

	ch = 'G';
	printf("%c in lowercase is represented as = %c\n", ch, tolower(ch));
	printf("%c in lowercase is represented as = %c\n\n", ch, ft_tolower(ch));
}