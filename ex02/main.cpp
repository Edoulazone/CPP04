/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschmitz <eschmitz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:03:58 by eschmitz          #+#    #+#             */
/*   Updated: 2025/04/28 13:23:18 by eschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define NB_ANIMALS 4

inline void	printNl(int nb)
{
	for (int i = 0; i < nb; i++)
		std::cout << std::endl;
}

inline void	printMess(const std::string message)
{
	std::cout << "/// " << message << " ///" << std::endl;
}

void	arrayTest(void)
{
	Animal *tab[NB_ANIMALS + 1];
	tab[NB_ANIMALS] = NULL;

	printMess("Creating cats");
	for (int i = 0; i < (NB_ANIMALS / 2); i++)
		tab[i] = new Cat();
	printNl(1);

	printMess("Creating dogs");
	for (int i = NB_ANIMALS / 2; i < NB_ANIMALS; i++)
		tab[i] = new Dog();
	printNl(1);

	printMess("All of them making sounds");
	for (int i = 0; i < NB_ANIMALS; i++)
		tab[i]->makeSound();
	printNl(1);

	printMess("Deleting all of them");
	for (int i = 0; i < NB_ANIMALS; i++)
		delete tab[i];
}

inline void	testCopyDog(void)
{
	printMess("Creating Dog 1");
	Dog *d1 = new Dog();
	printNl(1);

	printMess("Setting idea LETS EAT and LETS PLAY");
	d1->getBrain()->setIdea(0, "LETS EAT");
	d1->getBrain()->setIdea(1, "LETS PLAY");

	printMess("Print idea of Dog 1");
	std::cout << "[1] " << d1->getBrain()->getIdea(0) << std::endl;
	std::cout << "[2] " << d1->getBrain()->getIdea(1) << std::endl;
	printNl(1);

	printMess("Creating a copy of Dog 1 in a Dog 2");
	Dog *d2 = new Dog(*d1);
	printNl(1);

	printMess("Kill Dog 1");
	delete d1;
	printNl(1);

	printMess("Print idea of Dog 2");
	std::cout << "[1] " << d2->getBrain()->getIdea(0) << std::endl;
	std::cout << "[2] " << d2->getBrain()->getIdea(1) << std::endl;
	printNl(1);

	printMess("Kill Dog 2");
	delete d2;
	printNl(1);
}

inline void	testCopyCat(void)
{
	printMess("Creating Cat 1");
	Cat *d1 = new Cat();
	printNl(1);

	printMess("Setting idea LETS EAT and LETS PLAY");
	d1->getBrain()->setIdea(0, "LETS EAT");
	d1->getBrain()->setIdea(1, "LETS PLAY");

	printMess("Print idea of Cat 1");
	std::cout << "[1] " << d1->getBrain()->getIdea(0) << std::endl;
	std::cout << "[2] " << d1->getBrain()->getIdea(1) << std::endl;
	printNl(1);

	printMess("Creating a copy of Cat 1 in a Cat 2");
	Cat *d2 = new Cat(*d1);
	printNl(1);

	printMess("Kill Cat 1");
	delete d1;
	printNl(1);

	printMess("Print idea of Cat 2");
	std::cout << "[1] " << d2->getBrain()->getIdea(0) << std::endl;
	std::cout << "[2] " << d2->getBrain()->getIdea(1) << std::endl;
	printNl(1);

	printMess("Kill Cat 2");
	delete d2;
}

// inline void	testCrashInstance(void)
// {
// 	Animal *grizzly = new Animal();
// 	grizzly->makeSound();
// 	delete grizzly;
// }

int	main(void)
{

	std::cout << "############### ARRAY TEST ###############" << std::endl;
	arrayTest();
	printNl(2);

	std::cout << "############## COPY TEST DOG #############" << std::endl;
	testCopyDog();
	printNl(2);

	std::cout << "############## COPY TEST CAT #############" << std::endl;
	testCopyCat();
	printNl(2);
/*
	CETTE FONCTION A ETE AJOUTEE POUR MONTRER QUE LA CLASSE N'EST PAS INSTANCIABLE DESORMAIS
	SI VOUS DECOMMENTEZ LA FONCTION testCrashInstance() ET SON APPEL DANS LA FONCTION MAIN
	--> VOUS NE POURREZ PLUS COMPILER
*/
	// testCrashInstance();
	return (0);
}