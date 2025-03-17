/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:02:27 by eschmitz          #+#    #+#             */
/*   Updated: 2025/03/17 16:21:38 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal {
	private:
		Brain	*brain;

	public:
		Cat();
		~Cat();
		Cat(Cat &copy);

		Cat	&operator=(const Cat &copy);
		
		void	makeSound() const;
		Brain	*getBrain() const;
};

#endif