/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <luserbu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 19:44:00 by luserbu           #+#    #+#             */
/*   Updated: 2023/04/05 12:19:49 by luserbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
# include <string>

# include "Data.hpp"

class Serialize
{

	public:

		Serialize();
		Serialize( Serialize const & src );
		~Serialize();

		Serialize &		operator=( Serialize const & rhs );

		uintptr_t 		serialize(Data* ptr);
		Data* 			deserialize(uintptr_t raw);

	private:

};

#endif /* ******************************************************* SERIALIZE_H */