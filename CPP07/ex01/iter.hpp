/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <luserbu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:08:24 by luserbu           #+#    #+#             */
/*   Updated: 2023/03/29 15:39:54 by luserbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template< typename T >
void	iter(T *tab, int length, void (*f)(T &)) {

	int i = 0;
	
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

template< typename T >
void 	print(T element) {
	std::cout << element << std::endl;
}