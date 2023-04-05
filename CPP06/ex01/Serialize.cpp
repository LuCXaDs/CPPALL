/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <luserbu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 19:43:58 by luserbu           #+#    #+#             */
/*   Updated: 2023/04/05 12:19:18 by luserbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Serialize::Serialize()
{
}

Serialize::Serialize( const Serialize & src )
{
	(void) src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Serialize::~Serialize()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Serialize &				Serialize::operator=( Serialize const & rhs )
{
	(void) rhs;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

uintptr_t	Serialize::serialize(Data* ptr) {

	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *	Serialize::deserialize(uintptr_t raw) {

	return (reinterpret_cast<Data *>(raw));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */