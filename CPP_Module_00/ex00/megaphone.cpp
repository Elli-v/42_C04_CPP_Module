/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 01:11:42 by soooh             #+#    #+#             */
/*   Updated: 2022/02/01 01:58:20 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*CharUpper(char *c)
{
	for (int i = 0; c[i]; i++)
		c[i] = std::toupper(c[i]);
	return (c);
}

int		main(int argc, char **argv)
{
	int		i;
	// int		j;

	(void) argc;
	if (!argv[1])
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (i = 1; argv[i]; i++)
	{
		std::cout << CharUpper(argv[i]);
	}
	std::cout << std::endl;
	return (0);
}