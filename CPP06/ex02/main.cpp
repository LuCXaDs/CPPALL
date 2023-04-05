/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <luserbu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:36:12 by luserbu           #+#    #+#             */
/*   Updated: 2023/03/28 22:53:05 by luserbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <stdlib.h>
#include <time.h>

Base * generate(void);

void identify(Base* p);
void identify(Base& p);
		
Base * generate(void) {
	
	int random;

	srand (time(NULL));
	random = rand() % 3;

	std::cout << random << std::endl;

	if (random == 0)
	{
		A *classA = new A;
		
		return (classA);
	}
	else if (random == 1)
	{
		B *classB = new B;
		return (classB);
	}
	C *classC = new C;
	return (classC);
		
}

void	identify(Base *p) {
	
	A *classA;
	B *classB;
	C *classC;
	
	classA = dynamic_cast<A *>(p);
	if (classA == NULL)
		;
	else
	{
		std::cout << "It is Class A" << std::endl;
		return ;
	}
	classB = dynamic_cast<B *>(p);
	if (classB == NULL)
		;
	else
	{
		std::cout << "It is Class B" << std::endl;
		return ;
	}
	classC = dynamic_cast<C *>(p);
	if (classC == NULL)
		;
	else
	{
		std::cout << "It is Class C" << std::endl;
		return ;
	}
}

void	identify(Base &p) {
	
	try {
		A classA = dynamic_cast<A &>(p);
		std::cout << "It is Class A" << std::endl;
	}
	catch (std::exception &bc) {}
	try {
		B classB = dynamic_cast<B &>(p);
		std::cout << "It is Class B" << std::endl;
	}
	catch (std::exception &bc) {}
	try {
		C classC = dynamic_cast<C &>(p);
		std::cout << "It is Class C" << std::endl;
	}
	catch (std::exception &bc) {}
}


int main(void) {
	
	Base *lala;
	Base *lala1 = generate();
	Base &lala2 = *lala1;
	
	lala = generate();
	identify(lala);
	identify(lala2);
	return (0);
}