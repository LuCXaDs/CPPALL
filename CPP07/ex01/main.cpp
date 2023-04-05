/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <luserbu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:05:05 by luserbu           #+#    #+#             */
/*   Updated: 2023/03/29 15:42:43 by luserbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

std::string 	*fill_tab(std::string *tab) {

	for (int i = 0; i < 5; i++)
		tab[i] = "MAMA";
	return (tab);
}

int main( void ) {

	std::string tab[5];
	
	fill_tab(tab);
	iter(tab, 5, &print);
	
	return 0;
}