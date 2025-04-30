/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:31:45 by eschmitz          #+#    #+#             */
/*   Updated: 2025/03/18 15:27:41 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
	private:
		std::string	ideas[100];
	
	public:
		Brain();
		~Brain();
		Brain(Brain &copy);

		Brain	&operator=(const Brain &copy);

		std::string	getIdea(int index);
		void		setIdea(int index, const std::string idea);
};

#endif