/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:53:01 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/07/31 18:21:36 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	std::cout << "HumanB named "<< _name << " was created unarmed" << std::endl;
}

HumanB::~HumanB() {
	if (_weapon == NULL){
		std::cout << "HumanB named "<< _name << "unarmed was destroyed" 
				  << std::endl;
	}
	else {
		std::cout << "HumanB named "<< _name << "with weapon "
			      << _weapon->getTYpe() << "was destroyed" << std::endl;
	}
}

void HumanB::attack(){
	
	if (_weapon == NULL){
			std::cout << "HumanB named "<< _name << "is unarmed" << std::endl;
	}
	else{
		std::cout << "HumanB named " << _name 
		          << " attacks with their " << _weapon->getTYpe() << std::endl;
	}

}

void HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}