/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:51:54 by eschmitz          #+#    #+#             */
/*   Updated: 2025/03/17 15:10:35 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal() {
	this->type = "dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor was called" << std::endl;
}

Dog::Dog(Dog &copy): Animal(copy) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog	&Dog::operator=(const Dog &copy) {
	std::cout << "Dog assignation operator called" << std::endl;
	this->type = copy.type;
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "*Wouf*" << std::endl;
}