/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:30:43 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/07/31 18:19:54 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
	: _name(name), _weapon(weapon) {
	std::cout << "HumanB named " << _name << " was created with weapon "
	          << _weapon.getTYpe() << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanB named "<< _name << "with weapon "
			  << _weapon.getTYpe() << "was destroyed" << std::endl;
}

void HumanA::attack() {
	std::cout << _name << " attacks with weapon " << _weapon.getTYpe() << std::endl;
}
