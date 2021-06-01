/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 14:55:33 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/01 15:26:52 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../headers/main_libft.h"

void	main_ft_memcpy(char *dest, char *src, int n)
{
	src = malloc(strlen(src) * sizeof(char));
	dest = malloc(strlen(dest) * sizeof(char));

	printf("%s", src);
	ft_memcpy(dest, src, n);
	printf("%s", src);

	free(src);
	free(dest);
}
