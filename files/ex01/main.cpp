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

	uintptr_t	raw = Serializer::serialize(&data0);
	Data		*ptr = Serializer::deserialize(raw);

	std::cout << "n: " << ptr->n << std::endl;
	std::cout << "s1: " << ptr->s1 << std::endl;
	std::cout << "s2: " << ptr->s2 << std::endl;

    Data	data1;
    data1.n = 42;

    uintptr_t	serializedPtr = Serializer::serialize(&data1);
    Data		*deserializedPtr = reinterpret_cast<Data*>(Serializer::deserialize(serializedPtr));

    if (deserializedPtr == &data1)
        std::cout << "OK. Pointers are equal" << std::endl;
    else
        std::cout << "KO. Pointers are not equal." << std::endl;

	return (0);
}
