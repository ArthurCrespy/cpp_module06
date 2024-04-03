/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:46:59 by acrespy           #+#    #+#             */
/*   Updated: 2024/04/01 14:47:23 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include "Base.hpp"

Base::~Base() {}

Base *generate(void)
{
	Base *base;
	std::srand(time(NULL));
	int random = std::rand() % 3;

	if (random == 0)
		base = dynamic_cast<Base *>(new A);
	else if (random == 1)
		base = dynamic_cast<Base *>(new B);
	else
		base = dynamic_cast<Base *>(new C);

	return (base);
}

void identify(Base *p)
{
		if (dynamic_cast <A *>(p))
			std::cout << "A" << std::endl;
		else if (dynamic_cast <B *>(p))
			std::cout << "B" << std::endl;
		else if (dynamic_cast <C *>(p))
			std::cout << "C" << std::endl;
		else
			std::cout << "Unknown type" << std::endl;
}

void identify(Base &p)
{
		if (dynamic_cast <A *>(&p))
			std::cout << "A" << std::endl;
		else if (dynamic_cast <B *>(&p))
			std::cout << "B" << std::endl;
		else if (dynamic_cast <C *>(&p))
			std::cout << "C" << std::endl;
		else
			std::cout << "Unknown type" << std::endl;
}
