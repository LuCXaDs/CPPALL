/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <luserbu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:30:38 by luserbu           #+#    #+#             */
/*   Updated: 2023/03/28 22:46:31 by luserbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <exception>
# include <stdexcept>

class Base
{

	public:

		Base();
		virtual ~Base() = 0;

		// class None : public std::bad_cast 
		// {
		// 	public:
		// 		virtual const char* what() const throw()
		// 		{ return ("Base::bad_cast"); }
		// };


	private:

};

#endif /* ************************************************************ BASE_H */