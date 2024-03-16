/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:11:38 by mimoreir          #+#    #+#             */
/*   Updated: 2023/09/23 15:11:39 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl( void )
{

}

Harl::~Harl( void )
{

}

void	Harl::debug( void )
{
	std::cout << "[DEBUG]" << std:: endl << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special";
	std::cout << "-ketchup burger. I really do!" << std::endl << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[INFO]" << std:: endl << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough ";
	std::cout << "bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[WARNING]" << std:: endl << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for";
	std::cout << "years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ERROR]" << std:: endl << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int	i = 0;

	while (i < 4 && levels[i].compare(level))
		i++;
	switch (i)
	{
	case	0:
		this->debug();
		this->complain("INFO");
		break ;
	case	1:
		this->info();
		this->complain("WARNING");
		break ;
	case	2:
		this->warning();
		this->complain("ERROR");
		break ;
	case	3:
		this->error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
