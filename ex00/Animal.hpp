/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:00:16 by eschmitz          #+#    #+#             */
/*   Updated: 2025/03/17 15:46:59 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
	protected:
		std::string	type;

	public:
		Animal();
		virtual ~Animal();
		Animal(Animal &copy);
		
		Animal	&operator=(const Animal &copy);

		virtual void	makeSound() const;
		std::string	getType() const;
};

#endif