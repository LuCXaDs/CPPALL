/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <luserbu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:08:24 by luserbu           #+#    #+#             */
/*   Updated: 2023/03/29 14:38:13 by luserbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template< typename T >
void	swap(T& x, T& y) {

	T temp;

	temp = x;
	x = y;
	y = temp;
}

template< typename T >
T&	max(T& x, T& y) {

	return ((x>y) ? x : y);
}

template< typename T >
T&	min(T& x, T& y) {

	return ((x<y) ? x : y);
}