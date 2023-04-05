/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <luserbu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:12:01 by luserbu           #+#    #+#             */
/*   Updated: 2023/04/05 17:28:37 by luserbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include <sstream>

class ScalarConverter
{

	public:

		ScalarConverter();
		ScalarConverter( ScalarConverter const & src );
		~ScalarConverter();

		ScalarConverter &		operator=( ScalarConverter const & rhs );

		int		check_error(char **av);
		int		exception(double test);
		int		ft_error(std::string str);
		void	char_caractere(char a);
		void	double_caractere(double	d, int check, double test);
		void	int_caractere(int b, double test);
		void	float_caractere(float c, int check, double test);

	private:
		double 		test;
		char		*p;
		int			check_double;

};

#endif /* ************************************************* SCALARCONVERTER_H */