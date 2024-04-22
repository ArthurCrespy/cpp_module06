/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:08:18 by acrespy           #+#    #+#             */
/*   Updated: 2024/03/29 14:08:28 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>

class ScalarConverter
{
	private:
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const &src);
		~ScalarConverter(void);

		ScalarConverter &operator=(ScalarConverter const &rhs);

		static bool isChar(std::string str);
		static bool isInt(std::string str);
		static bool isFloat(std::string str);
		static bool isDouble(std::string str);

		static void toChar(std::string str);
		static void toInt(std::string str);
		static void toFloat(std::string str);
		static void toDouble(std::string str);

	public:
		static void convert(std::string const str);
};

#endif
