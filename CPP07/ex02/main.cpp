/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <luserbu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:05:05 by luserbu           #+#    #+#             */
/*   Updated: 2023/03/30 20:06:28 by luserbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main( void ) {

	Array<int> a(5);

	std::cout << a.size() << std::endl;
	
	std::cout << std::endl;
	std::cout << "-------------------- TEST --------------------" << std::endl;
	std::cout << std::endl;
	
	Array<int> b(0);
	Array<int> c(100);


	std::cout << b.size() << std::endl;
	std::cout << c.size() << std::endl;

	std::cout << std::endl;
	std::cout << "-------------------- TEST --------------------" << std::endl;
	std::cout << std::endl;
	
	b = c;
	std::cout << b.size() << std::endl;
	std::cout << c.size() << std::endl;

	std::cout << std::endl;
	std::cout << "-------------------- TEST --------------------" << std::endl;
	std::cout << std::endl;
	
	Array<int> d(20);
	Array<int> e(50);
	
	std::cout << d.size() << std::endl;
	std::cout << e.size() << std::endl;

	std::cout << std::endl;
	std::cout << "-------------------- TEST --------------------" << std::endl;
	std::cout << std::endl;

	Array<int> f(d);
	
	std::cout << d.size() << std::endl;
	std::cout << e.size() << std::endl;
	std::cout << f.size() << std::endl;

	std::cout << std::endl;
	std::cout << "-------------------- TEST --------------------" << std::endl;
	std::cout << std::endl;


	Array<int> g(25);
	g.fill_array(10111001, 20);
	g.fill_array(10111001, 32);

	try { std::cout << g[17] << std::endl; }
	catch(const std::exception& e)
	{ std::cout << e.what() << '\n'; }
	
	try { std::cout << g[20] << std::endl; }
	catch(const std::exception& e)
	{ std::cout << e.what() << '\n'; }
}
