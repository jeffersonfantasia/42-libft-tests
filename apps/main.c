/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 21:24:45 by jfranchi          #+#    #+#             */
/*   Updated: 2021/05/23 23:04:28 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int	ch;

	ch = 'G';
	printf("%c in lowercase is represented as = %c\n", ch, tolower(ch));
	printf("%c in lowercase is represented as = %c\n\n", ch, ft_tolower(ch));
	return (0);
}
