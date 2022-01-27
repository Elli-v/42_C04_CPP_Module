/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 03:19:18 by soooh             #+#    #+#             */
/*   Updated: 2022/01/28 03:19:21 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <cstdint>

typedef	struct data
{
	int		i;
	char	c;
}				Data;

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif
