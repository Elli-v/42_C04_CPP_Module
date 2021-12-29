/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 01:11:42 by soooh             #+#    #+#             */
/*   Updated: 2021/12/30 02:13:08 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	CharUpper(char c)
{
	if ('a' <= c && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	
	std::cout << "0";
	(void) argc;
	if (!argv[1])
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (i = 1; argv[i]; i++)
	{
		for (j = 0; argv[i][j]; j++)
			std::cout << CharUpper(argv[i][j]);
	}
	std::cout << std::endl;
	return (0);
}