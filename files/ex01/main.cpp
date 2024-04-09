/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:07:15 by acrespy           #+#    #+#             */
/*   Updated: 2024/03/29 16:07:17 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data	data0;
	data0.n = 42;
	data0.s1 = "Hello";
	data0.s2 = "World";

	uintptr_t	serializedPtr0 = Serializer::serialize(&data0);
	Data		*deserializedPtr0 = Serializer::deserialize(serializedPtr0);

	std::cout << "n: " << deserializedPtr0->n << std::endl;
	std::cout << "s1: " << deserializedPtr0->s1 << std::endl;
	std::cout << "s2: " << deserializedPtr0->s2 << std::endl;

    Data	data1;
    data1.n = 42;

    uintptr_t	serializedPtr1 = Serializer::serialize(&data1);
    Data		*deserializedPtr1 = Serializer::deserialize(serializedPtr1);

    if (deserializedPtr1 == &data1)
		std::cout << "OK. Pointers are equal" << std::endl;
    else
		std::cout << "KO. Pointers are not equal." << std::endl;

	return (0);
}
