/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 10:50:13 by mimoreir          #+#    #+#             */
/*   Updated: 2024/07/06 12:33:05 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Converter
{
	private:
		Converter();
		Converter(const Converter& src);
		Converter&	operator=(const Converter& src);
	public:
		~Converter();
		static void	convert(const std::string& str);
};

#endif
