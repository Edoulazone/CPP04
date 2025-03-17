/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:26:22 by eschmitz          #+#    #+#             */
/*   Updated: 2025/03/17 16:58:08 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
	this->type = "cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor was called" << std::endl;
}

Cat::Cat(Cat &copy): Animal(copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*(copy.getBrain()));
	this->type = copy.getType();
}

Cat	&Cat::operator=(const Cat &copy) {
	std::cout << "Cat assignation operator called" << std::endl;
	this->type = copy.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*(copy.getBrain()));
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "*Miaou*" << std::endl;
}

Brain	*Cat::getBrain(void) const {
	return (this->brain);
}