/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:19:06 by mimoreir          #+#    #+#             */
/*   Updated: 2023/09/23 14:19:07 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>

class PhoneBook
{
	private:
		Contact	Contacts[8];
		int		Index;
		int		max;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	Add(void);
		void	Search(void);
		void	Display(void);
};

#endif
