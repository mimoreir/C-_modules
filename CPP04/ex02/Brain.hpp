/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:34:20 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 14:59:03 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <iomanip>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain( void );
		Brain( Brain const& obj );
		~Brain( void );
		void	fillIdeas( void );
		std::string	printIdea( int i) const;
		Brain&	operator=( Brain const& obj );
};

#endif //BRAIN_HPP
