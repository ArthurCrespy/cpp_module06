/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:08:18 by acrespy           #+#    #+#             */
/*   Updated: 2024/03/29 14:11:18 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
	*this = src;
}

ScalarConverter::~ScalarConverter(void) {}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &rhs)
{
	if (this != &rhs)
	{}
	return (*this);
}

void	ScalarConverter::convert(std::string str)
{
	if (str.empty())
	{
		std::cout << "Error : Invalid parameter" << std::endl;
		return ;
	}
	if (isChar(str))
		toChar(str);
	else if (isInt(str))
		toInt(str);
	else if (isFloat(str))
		toFloat(str);
	else if (isDouble(str))
		toDouble(str);
	else
		std::cout << "Error : Invalid input" << std::endl;
}
