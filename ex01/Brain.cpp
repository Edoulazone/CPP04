/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:41:30 by eschmitz          #+#    #+#             */
/*   Updated: 2025/03/17 16:58:45 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "That's some bloody nice idea mate!";
	std::cout << "Brain constructor was called" << std::endl;
}

Brain::~Brain() {
	delete [] (this->ideas);
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain &copy) {
	std::string *copyIdeas = copy.getIdeas();
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copyIdeas[i] + " I stole it!";
	std::cout << "Brain copy constructor was called" << std::endl;
}

Brain &Brain::operator=(const Brain &copy) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return (*this);
}

std::string	*Brain::getIdeas() {
	return (this->ideas);
}