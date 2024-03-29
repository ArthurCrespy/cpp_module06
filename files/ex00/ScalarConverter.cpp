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
	if (this != &rhs) {}
	return (*this);
}

void ScalarConverter::convertSpecial(const char *str)
{
	if (strlen(str) == 3 && str[0] == '\'' && str[2] == '\'')
	{
		if (std::isprint(str[1]))
			std::cout << "Char: " << str[1] << std::endl;
		else
			std::cout << "Non-displayable character" << std::endl;
	}
	else if (std::strcmp(str, "-inf") == 0 || std::strcmp(str, "+inf") == 0 || std::strcmp(str, "inf") == 0)
	{
		if (std::strcmp(str, "-inf") == 0)
			std::cout << "Double: -infinity" << std::endl;
		else
			std::cout << "Double: infinity" << std::endl;
	}
	else if (std::strcmp(str, "-inff") == 0 || std::strcmp(str, "+inff") == 0 || std::strcmp(str, "inff") == 0)
	{
		if (std::strcmp(str, "-inff") == 0)
			std::cout << "Float: -infinity" << std::endl;
		else
			std::cout << "Float: infinity" << std::endl;
	}
	else if (std::strcmp(str, "nan") == 0 || std::strcmp(str, "-nan") == 0)
	{
		if (std::strcmp(str, "-nan") == 0)
			std::cout << "Double: -NaN" << std::endl;
		else
			std::cout << "Double: NaN" << std::endl;
	}
}

void ScalarConverter::convertNumeric(const char *str)
{	
	char		*endPtr;
	long		longVal;
	double		doubleVal;
	float		floatVal;
	
	if (str[strlen(str) - 1] == 'f')
	{
		floatVal = static_cast<float>(std::atof(str));
		if (std::strstr(str, "f") == str + strlen(str) - 1)
		{
			std::cout << "Float: " << floatVal << std::endl;
			return;
		}
	}
	longVal = std::strtol(str, &endPtr, 10);
	if (*endPtr == '\0')
		std::cout << "Int: " << longVal << std::endl;
	else
	{
		doubleVal = std::strtod(str, &endPtr);
		if (*endPtr == '\0')
			std::cout << "Double: " << doubleVal << std::endl;
		else
			std::cout << "Invalid str" << std::endl;
	}
}

void ScalarConverter::convert(const std::string &input)
{
	const char	*str;

	str = input.c_str();
    if ((input.size() == 3 && str[0] == '\'' && str[2] == '\'') ||
        (std::strcmp(str, "-inf") == 0 || std::strcmp(str, "+inf") == 0 || std::strcmp(str, "inf") == 0) ||
        (std::strcmp(str, "-inff") == 0 || std::strcmp(str, "+inff") == 0 || std::strcmp(str, "inff") == 0) ||
        (input == "nan" || input == "-nan"))
        convertSpecial(str);
    else
        convertNumeric(str);
}
