/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:10:43 by acrespy           #+#    #+#             */
/*   Updated: 2024/04/01 15:10:45 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main()
{
	Base *base;

	base = generate();
	identify(base);
	identify(*base);

	delete (base);
	return (0);
}
