/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <luserbu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:36:12 by luserbu           #+#    #+#             */
/*   Updated: 2023/04/05 12:22:33 by luserbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Serialize.hpp"

int main(void) {

	Data mama;
	Serialize classe;
	
	mama.lol = 100;
	std::cout << classe.deserialize(classe.serialize(&mama))->lol << std::endl;
	
}