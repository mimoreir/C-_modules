/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed2.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:10:57 by mimoreir          #+#    #+#             */
/*   Updated: 2023/09/23 15:10:58 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED2_HPP
# define SED2_HPP

# include <fstream>
# include <iostream>
# include <cstdlib>

class Sed2
{
	private:
		std::string inFile;
		std::string outFile;

	public:
		Sed2( std::string filename );
		~Sed2( void );
		void	replace( std::string s1, std::string s2 );

};

#endif
