/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:41:30 by eschmitz          #+#    #+#             */
/*   Updated: 2025/03/18 15:27:23 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor was called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain &copy) {
	std::cout << "Brain copy constructor was called" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &copy) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return (*this);
}

std::string	Brain::getIdea(int index) {
	if (index >= 0 && index < 100)
		return (this->ideas[index]);
	else {
		std::cout << "Invalid index" << std::endl;
		return ("");
	}
}

void	Brain::setIdea(int index, const std::string idea) {
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
	else
		std::cout << "Invalid index" << std::endl;
}