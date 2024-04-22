/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:53:23 by acrespy           #+#    #+#             */
/*   Updated: 2024/04/22 10:53:23 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	ScalarConverter::isChar(std::string str)
{
	if (str.length() == 1 && ((str[0] >= 0 && str[0] < 48) || (str[0] > 57)))
		return (true);
	return (false);
}

bool	ScalarConverter::isInt(std::string str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (!std::isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	ScalarConverter::isFloat(std::string str)
{
	int	i;
	int	point;

	i = 0;
	point = 0;
	if (str == "nanf" || str == "+inff" || str == "-inff")
		return (true);
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && str[i + 1])
	{
		if (str[i] == '.')
		{
			point++;
			i++;
			continue ;
		}
		if (!std::isdigit(str[i]))
			return (false);
		i++;
	}
	if (point > 1 || str[i] != 'f')
		return (false);
	return (true);
}

bool	ScalarConverter::isDouble(std::string str)
{
	int	i;
	int	point;

	i = 0;
	point = 0;
	if (str == "nan" || str == "+inf" || str == "-inf")
		return (true);
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] == '.')
		{
			point++;
			i++;
			continue ;
		}
		if (!std::isdigit(str[i]))
			return (false);
		i++;
	}
	if (point > 1)
		return (false);
	return (true);
}

char	c = 0;
int		i = 0;
float	f = 0.0f;
double	d = 0.0;

void	ScalarConverter::toChar(std::string str)
{
	c = str[0];
	i = static_cast<int>(c);
	f = static_cast<float>(c);
	d = static_cast<double>(c);
	if (c < 32 || c >= 127)
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << ".0f" << std::endl;
	std::cout << "double: " << d << ".0" << std::endl;
}

void	ScalarConverter::toInt(std::string str)
{
	std::stringstream(str) >> i;
	c = static_cast<char>(i);
	f = static_cast<float>(i);
	d = static_cast<double>(i);
	if (c < 32 || c >= 127)
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << ".0f" << std::endl;
	std::cout << "double: " << d << ".0" << std::endl;
}

void	ScalarConverter::toFloat(std::string str)
{
	if (str == "nanf" || str == "+inff" || str == "-inff")
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << str << std::endl;
		str.erase(str.length() - 1);
		std::cout << "double: " << str << std::endl;
		return ;
	}
	str.erase(str.length() - 1);
	std::stringstream(str) >> f;
	c = static_cast<char>(f);
	i = static_cast<int>(f);
	d = static_cast<double>(f);
	if (c < 32 || c >= 127)
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	ScalarConverter::toDouble(std::string str)
{
	if (str == "nan" || str == "+inf" || str == "-inf")
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << str + "f" << std::endl;
		std::cout << "double: " << str << std::endl;
		return ;
	}
	std::stringstream(str) >> d;
	c = static_cast<char>(d);
	i = static_cast<int>(d);
	f = static_cast<float>(d);
	if (!std::isprint(c))
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}
