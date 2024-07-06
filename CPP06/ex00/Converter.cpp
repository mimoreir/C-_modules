/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 10:50:17 by mimoreir          #+#    #+#             */
/*   Updated: 2024/07/06 13:04:47 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter( void )
{
	
}

Converter::Converter(const Converter &src)
{
	*this = src;
}

Converter& Converter::operator=(const Converter &src)
{
    (void)src;
	return *this;
}

Converter::~Converter( void )
{
	
}

void Converter::convert(const std::string& str)
{
	std::string	types[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	std::string _char = "";
	int			_int = 0;
	float		_float = 0.0f;
	double		_double = 0;
	if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
	{
		std::cout << "char: " << str[0] << std::endl;
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
		return ;
	}

	if (str == "nanf" || str == "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}

	if (str == "inf" || str == "+inff" || str == "+inf" || str == "inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
		return ;
	}
	if (str == "-inf" || str == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return ;
	}
	
	_int = std::atoi(str.c_str());
	
	if (str.length() - 1 == 'f')
	{
		_float = static_cast<float>(atof(str.c_str()));
		_double = static_cast<double>(_float);
	}
	else
	{
		_double = static_cast<double>(atof(str.c_str()));;
		_float = static_cast<float>(_double);
	}
	
	for (int i = 0; i < 6; i++)
	{
		if (str == types[i])
		{
			_char = "impossible";
			break ;
		}
	}
	
	if (_char == "" && std::isprint(_int))
	{
		_char = "'";
		_char += static_cast<char>(_int);
		_char += "'";
	}
	else
	{
		_char = "Non displayable";
	}

	std::cout << "char: " << _char << std::endl;
	
	if (_char == "impossible")
		std::cout << "int: impossible" << std::endl;
	else
	{
		std::cout << "int: " << _int << std::endl;
	}

	if (_char == "impossible" && _float == 0)
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else
	{
		if (_char != "impossible" && _float - static_cast<int>(_float) == 0)
		{
			std::cout << "float: " << _float << ".0f" << std::endl;
			std::cout << "double: " << _double << ".0" << std::endl;
		}
		else
		{
			std::cout << "float: " << _float << "f" << std::endl;
			std::cout << "double: " << _double << std::endl;
		}
	}
}
