/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:51:54 by eschmitz          #+#    #+#             */
/*   Updated: 2025/03/18 15:32:49 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(), brain(new Brain()) {
	this->type = "dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor was called" << std::endl;
	delete this->brain;
}

Dog::Dog(Dog &copy): Animal(), brain(NULL) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog	&Dog::operator=(const Dog &copy) {
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &copy) {
		this->type = copy.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*(copy.getBrain()));
	}
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "*Wouf*" << std::endl;
}

Brain	*Dog::getBrain(void) const {
	return (this->brain);
}