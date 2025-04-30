/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:05:17 by eschmitz          #+#    #+#             */
/*   Updated: 2025/03/17 16:21:35 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal {
	private:
		Brain	*brain;

	public:
		Dog();
		~Dog();
		Dog(Dog &copy);

		Dog	&operator=(const Dog &copy);

		void	makeSound() const;
		Brain	*getBrain() const;
};

#endif