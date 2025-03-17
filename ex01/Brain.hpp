/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:31:45 by eschmitz          #+#    #+#             */
/*   Updated: 2025/03/17 15:41:27 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
	private:
		std::string	*ideas;
	
	public:
		Brain();
		~Brain();
		Brain(Brain &copy);
		Brain	&operator=(const Brain &copy);
		std::string	*getIdeas();
};

#endif