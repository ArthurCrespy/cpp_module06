/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:15:02 by acrespy           #+#    #+#             */
/*   Updated: 2024/03/29 14:15:04 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ScalarConverter::convert(argv[1]);
		return (0);
	}

	else
	{
		std::cout << "-- Tests --" << std::endl;

		ScalarConverter::convert("'a'");
		ScalarConverter::convert("quatre-deux");
		ScalarConverter::convert("'\x1F'");

		std::cout << std::endl;

		ScalarConverter::convert("0");
		ScalarConverter::convert("-42");
		ScalarConverter::convert("42");

		std::cout << std::endl;

		ScalarConverter::convert("0.0f");
		ScalarConverter::convert("-4.2f");
		ScalarConverter::convert("4.2f");
		ScalarConverter::convert("-inff");
		ScalarConverter::convert("+inff");

		std::cout << std::endl;

		ScalarConverter::convert("0.0");
		ScalarConverter::convert("-4.2");
		ScalarConverter::convert("4.2");
		ScalarConverter::convert("-inf");
		ScalarConverter::convert("+inf");
		ScalarConverter::convert("nan");
	}

	return (0);
}
