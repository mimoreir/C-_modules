/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:22:46 by mimoreir          #+#    #+#             */
/*   Updated: 2024/08/25 12:50:56 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void print(T const &t)
{
    std::cout << t << std::endl;
}

template<typename T>
void addOne(T &t)
{
    t++;
}

int main()
{
    int plop[] = {0,1,2,3,4,5,6,7,8,9};
    std::string strs[] = { "Salut", "Comment" , "Tu", "Vas", "?"};

    std::cout << "Print integer array : " << std::endl;
    iter<const int>(plop, 10, print);
    std::cout << std::endl;

    iter<int>(plop, 10, addOne);
    std::cout << "Print integer array after addOne: " << std::endl;
    iter<const int>(plop, 10, print);
    std::cout << std::endl;
    
    std::cout << "Print std::string array :" << std::endl;
    iter<const std::string>(strs, 5, print);
}
