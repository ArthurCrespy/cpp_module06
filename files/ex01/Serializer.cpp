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

uniptr_t Serializer::serialize(Data* ptr)
{
	uniptr_t raw = 0;

	raw = reinterpret_cast<uniptr_t>(ptr);
	return (raw);
}

Data* Serializer::deserialize(uniptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}