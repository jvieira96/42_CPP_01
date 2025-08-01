/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 13:09:13 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/08/01 13:17:51 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inc.hpp"

int main(int ac, char *av[])
{
	if (ac != 4){
		std::cout << RED << "Error: wrong number of arguments" << RESET << std::endl;
		return 1;
	}

	std::string file = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if (file.empty() || s1.empty() || s2.empty()){
		std::cout << RED << "Error: empty arguments" << RESET << std::endl;
		return 1;
	}





	return 0;
}