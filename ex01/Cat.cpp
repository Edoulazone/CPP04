/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:26:22 by eschmitz          #+#    #+#             */
/*   Updated: 2025/03/18 15:31:54 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal(), brain(new Brain()) {
	this->type = "cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor was called" << std::endl;
	delete this->brain;
}

Cat::Cat(Cat &copy): Animal(), brain(NULL) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat	&Cat::operator=(const Cat &copy) {
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &copy) {
		this->type = copy.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*(copy.getBrain()));
	}
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "*Miaou*" << std::endl;
}

Brain	*Cat::getBrain(void) const {
	return (this->brain);
}