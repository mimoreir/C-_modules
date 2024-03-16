/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:10:52 by mimoreir          #+#    #+#             */
/*   Updated: 2023/10/28 11:22:35 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sed2.hpp"

Sed2::Sed2( std::string filename ) : inFile(filename)
{
	this->outFile = filename + ".replace";
}

Sed2::~Sed2( void )
{

}

void   Sed2::replace( std::string s1, std::string s2 )
{
	std::ifstream	inf(this->inFile.c_str());

	if ( inf.is_open() )
	{
		std::string	content;
		std::getline(inf, content, '\0');
		size_t	pos = content.find(s1);

		if (s1.empty() || s2.empty())
		{
			std::cout << "You need something to find!" << std::endl;
			exit(EXIT_FAILURE);
		}
		while ( pos != std::string::npos )
		{
			content.erase(pos, s1.length());
			content.insert(pos, s2);
			pos = content.find(s1);
		}
		if (content.empty())
		{
			std::cerr << "File is empty" << std::endl;
			exit(EXIT_FAILURE);
		}
		std::ofstream	outf(this->outFile.c_str());
		outf << content;
		outf.close();
		inf.close();
	}
	else
	{
		std::cerr << "File not found" << std::endl;
		std::exit(EXIT_FAILURE);
	}
}
