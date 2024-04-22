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
	if (argc != 2)
	{
		std::cout << "Error: Invalid number of arguments" << std::endl;
		return (-1);
	}

	if (std::string(argv[1]) != "test")
	{
		ScalarConverter::convert(argv[1]);
		return (0);
	}
	else
	{
		std::cout << "--- Tests ---" << std::endl;

		ScalarConverter::convert("'a'");
		ScalarConverter::convert("quatre-deux");
		ScalarConverter::convert("'\x1F'");
		std::cout << std::endl;

		std::cout << std::endl << "-- 0 --" << std::endl;
		ScalarConverter::convert("0");
		std::cout << std::endl << "-- -42 --" << std::endl;
		ScalarConverter::convert("-42");
		std::cout << std::endl << "-- 100 --" << std::endl;
		ScalarConverter::convert("100");
		std::cout << std::endl;

		std::cout << std::endl << "-- 0.0f --" << std::endl;
		ScalarConverter::convert("0.0f");
		std::cout << std::endl << "-- -4.2f --" << std::endl;
		ScalarConverter::convert("-4.2f");
		std::cout << std::endl << "-- 4.2f --" << std::endl;
		ScalarConverter::convert("4.2f");
		std::cout << std::endl << "-- -inf --" << std::endl;
		ScalarConverter::convert("-inff");
		std::cout << std::endl << "-- +inf --" << std::endl;
		ScalarConverter::convert("+inff");
		std::cout << std::endl;

		std::cout << std::endl << "-- 0.0 --" << std::endl;
		ScalarConverter::convert("0.0");
		std::cout << std::endl << "-- -4.2 --" << std::endl;
		ScalarConverter::convert("-4.2");
		std::cout << std::endl << "-- 4.2 --" << std::endl;
		ScalarConverter::convert("4.2");
		std::cout << std::endl << "-- -inf --" << std::endl;
		ScalarConverter::convert("-inf");
		std::cout << std::endl << "-- +inf --" << std::endl;
		ScalarConverter::convert("+inf");
		std::cout << std::endl << "-- nan --" << std::endl;
		ScalarConverter::convert("nan");
		return (0);
	}

	return (0);
}
