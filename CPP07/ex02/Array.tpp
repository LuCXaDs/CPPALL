/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <luserbu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 00:27:20 by luserbu           #+#    #+#             */
/*   Updated: 2023/03/30 20:05:52 by luserbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

template<typename T>
Array<T>::Array() : _array(NULL) {
	
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	_array = new T [n]();
	_length = n;
}

template<typename T>
Array<T>::Array( const Array & src )
{
	if (src.get_array() == NULL)
		this->_array = NULL;
	else
	{	
		int l = src.size();
		this->_array = new T [l];
		for (int n = 0; n < l ; n++)
			this->_array[n] = src._array[n];
		_length = l;
	}
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

template<typename T>
Array<T>::~Array() {
	delete[] _array;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

template<typename T>
Array<T> &	Array<T>::operator=( Array<T> const & rhs )
{
	if ( this != &rhs )
	{
		if (rhs.get_array() == NULL)
			this->_array = NULL;
		else
		{	
			int l = rhs.size();
			delete[] _array;
			this->_array = new T [l];
			for (int n = 0; n < l ; n++)
				this->_array[n] = rhs._array[n];
			_length = l;
		}
	}
	return *this;
}


template<typename T>
T &		Array<T>::operator[](int index )
{
	if (_array[index] != 0)
		return (_array[index]);
	else
		throw (Array::Expt());
	return (_array[index]);
}

/*
** --------------------------------- METHODS ----------------------------------
*/
template<typename T>
T *		Array<T>::get_array(void) const {

	if (this->_array != NULL)
		return (this->_array);
	else
		return (NULL);
}

template<typename T>
int		Array<T>::size(void) const {
	
	return (this->_length);
}

template<typename T>
void	Array<T>::fill_array(T name, size_t n) {

	if (n > this->_length)
		std::cerr << "ERROR" << std::endl;
	else
		_array[n] = name;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */