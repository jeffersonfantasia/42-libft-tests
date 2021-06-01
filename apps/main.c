/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 21:24:45 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/01 15:25:47 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../headers/main_libft.h"

int	main(void)
{
	puts("**********************************************************************");
	puts("                               ft_tolower                             ");
	puts("**********************************************************************\n");
	main_ft_tolower('a');
	main_ft_tolower('b');
	puts("\n");

	puts("**********************************************************************");
	puts("                               ft_toupper                             ");
	puts("**********************************************************************\n");
	main_ft_toupper('c');
	main_ft_toupper('r');
	puts("\n");

	puts("**********************************************************************");
	puts("                               ft_isprint                             ");
	puts("**********************************************************************\n");
	main_ft_isprint('k');
	main_ft_isprint('8');
	main_ft_isprint('\t');
	main_ft_isprint(' ');
	puts("\n");

	puts("**********************************************************************");
	puts("                               ft_isascii                             ");
	puts("**********************************************************************\n");
	main_ft_isascii('k');
	main_ft_isascii('8');
	main_ft_isascii('\t');
	main_ft_isascii(' ');
	main_ft_isascii(126);
	puts("\n");

	puts("**********************************************************************");
	puts("                               ft_isalnum                             ");
	puts("**********************************************************************\n");
	main_ft_isalnum('1');
	main_ft_isalnum('\t');
	main_ft_isalnum(' ');
	main_ft_isalnum('d');
	main_ft_isalnum('^');
	puts("\n");

	puts("**********************************************************************");
	puts("                               ft_isdigit                             ");
	puts("**********************************************************************\n");
	main_ft_isdigit('1');
	main_ft_isdigit('\t');
	main_ft_isdigit(' ');
	main_ft_isdigit('4');
	puts("\n");

	puts("**********************************************************************");
	puts("                               ft_isalpha                             ");
	puts("**********************************************************************\n");
	main_ft_isalpha('1');
	main_ft_isalpha('\t');
	main_ft_isalpha(' ');
	main_ft_isalpha('a');
	main_ft_isalpha('D');
	puts("\n");

	puts("**********************************************************************");
	puts("                               ft_memset                              ");
	puts("**********************************************************************\n");
	main_ft_memset("GeeksForGeeks is for programming geeks");
	main_ft_memset("   This is a great test!");
	puts("\n");

	puts("**********************************************************************");
	puts("                               ft_bzero                               ");
	puts("**********************************************************************\n");
	main_ft_bzero("GeeksForGeeks is for programming geeks", "GeeksForGeeks is for programming geeks", 10);
	main_ft_bzero("   This is a great test!", "   This is a great test!", 0);
	puts("\n");

	puts("**********************************************************************");
	puts("                               ft_memcpy                              ");
	puts("**********************************************************************\n");
	main_ft_memcpy("Test 42 Scholl", "Test 42 Scholl", 3);
	puts("\n");
	return (0);
}
