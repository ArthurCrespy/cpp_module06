/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:06:25 by acrespy           #+#    #+#             */
/*   Updated: 2024/03/29 16:06:54 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void) {}

Serializer::Serializer(Serializer const &src)
{
	*this = src;
}

Serializer::~Serializer(void) {}

Serializer &Serializer::operator=(const Serializer &rhs)
{
	if (this != &rhs) {}
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t raw = 0;

	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
