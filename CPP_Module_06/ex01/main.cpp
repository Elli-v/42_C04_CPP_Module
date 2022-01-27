/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 03:17:44 by soooh             #+#    #+#             */
/*   Updated: 2022/01/28 03:25:47 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main(void)
{
	uintptr_t uintptr;
	Data data;
	data.i = 42;
	data.c = 'a';

	std::cout << "i: " << data.i << std::endl;
	std::cout << "c: " << data.c << std::endl;

	uintptr = serialize(&data);
	std::cout << "uintptr: " << uintptr << std::endl;

	Data *data_ds;
	data_ds = deserialize(uintptr);

	std::cout << "new i: " << data_ds->i << std::endl;
	std::cout << "new c: " << data_ds->c << std::endl;
	
	return 0;
}