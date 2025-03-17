/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:00:52 by eschmitz          #+#    #+#             */
/*   Updated: 2025/03/17 15:06:35 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Default WrongAnimal constructor was called" << std::endl;
	this->type = "animal";
}

WrongAnimal::WrongAnimal(WrongAnimal &copy) {
	this->type = copy.type;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor was called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &copy) {
	this->type = copy.type;
	return (*this);
}

void	WrongAnimal::makeSound() const {
	std::cout << "*Classic WrongAnimal sound*" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return (this->type);
}