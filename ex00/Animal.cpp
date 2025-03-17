/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:20:03 by eschmitz          #+#    #+#             */
/*   Updated: 2025/03/17 14:31:50 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Default animal constructor was called" << std::endl;
	this->type = "animal";
}

Animal::Animal(Animal &copy) {
	this->type = copy.type;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor was called" << std::endl;
}

Animal	&Animal::operator=(const Animal &copy) {
	this->type = copy.type;
	return (*this);
}

void	Animal::makeSound() const {
	std::cout << "*Classic animal sound*" << std::endl;
}

std::string	Animal::getType() const {
	return (this->type);
}