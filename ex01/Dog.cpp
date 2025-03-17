/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:51:54 by eschmitz          #+#    #+#             */
/*   Updated: 2025/03/17 16:58:28 by eschmitz         ###   ########.fr       */
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
	std::cout << "Check 0\n";
	this->brain = new Brain(*(copy.getBrain()));
	std::cout << "Check 1\n";
	this->type = copy.getType();
	std::cout << "Check 2\n";
}

Dog	&Dog::operator=(const Dog &copy) {
	std::cout << "Dog assignation operator called" << std::endl;
	this->type = copy.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*(copy.getBrain()));
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "*Wouf*" << std::endl;
}

Brain	*Dog::getBrain(void) const {
	return (this->brain);
}