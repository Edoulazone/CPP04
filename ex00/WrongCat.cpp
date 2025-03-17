/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:06:50 by eschmitz          #+#    #+#             */
/*   Updated: 2025/03/17 15:15:58 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
	this->type = "cat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor was called" << std::endl;
}

WrongCat::WrongCat(WrongCat &copy): WrongAnimal(copy) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
}

WrongCat	&WrongCat::operator=(const WrongCat &copy) {
	std::cout << "WrongCat assignation operator called" << std::endl;
	this->type = copy.type;
	return (*this);
}

void	WrongCat::makeSound() const {
	std::cout << "*Wouf*" << std::endl;
}