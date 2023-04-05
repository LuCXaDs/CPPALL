/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <luserbu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:36:12 by luserbu           #+#    #+#             */
/*   Updated: 2023/04/05 17:20:28 by luserbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int		exception(double test)
{
	std::ostringstream 	s;
	std::string 		str;

	s << test;
	str = s.str();
	if (str == "nan" || str == "nanf" || str == "inf" 
		|| str == "-inf" || str == "+inf" || str == "inff" 
		|| str == "-inff" || str == "+inff")
		return (0);
	return (1);
}

int	ft_error(std::string str)
{
	
	std::cout << "char : " << "Impossible" << std::endl;
	std::cout << "int : " << "Impossible" << std::endl;
	std::cout << "float : " << str << "f" << std::endl;
	std::cout << "double : " << str << std::endl;
	return (0);
}

void	char_caractere(char a)
{
	int		b;
	float	c;
	double	d;

	b = static_cast<int>(a);
	c = static_cast<float>(a);
	d = static_cast<double>(a);
	
	std::cout << "char : " << a << std::endl;
	std::cout << "int : " << b << std::endl;
	std::cout << "float : " << c << ".0f" << std::endl;
	std::cout << "double : " << d << ".0" << std::endl;
}

void	double_caractere(double	d, int check, double test)
{
	int		b;
	float	c;

	b = static_cast<int>(d);
	c = static_cast<float>(d);
	
	std::cout << "char : " << "Non displayable" << std::endl;
	
	if (test >= INT_MIN && test <= INT_MAX)
		std::cout << "int : " << b << std::endl;
	else
		std::cout << "int : " << "overflow" << std::endl;
	
	if (check == 1 || !exception(test) || test >= 100000)
	{
		std::cout << "float : " << c << "f" << std::endl;
		std::cout << "double : " << d << std::endl;
	}
	else
	{
		std::cout << "float : " << c << ".0f" << std::endl;
		std::cout << "double : " << d << ".0" << std::endl;
	}
}

void	int_caractere(int b, double test)
{
	float	c;
	double	d;

	c = static_cast<float>(b);
	d = static_cast<double>(b);

	std::cout << "char : " << "Non displayable" << std::endl;

	if (test >= INT_MIN && test <= INT_MAX)
		std::cout << "int : " << b << std::endl;
	else
		std::cout << "int : " << "overflow" << std::endl;

	if (test >= 100000)
	{
		std::cout << "float : " << c << "f" << std::endl;
		std::cout << "double : " << d << std::endl;
	}
	else
	{
		std::cout << "float : " << c << ".0f" << std::endl;
		std::cout << "double : " << d << ".0" << std::endl;
	}
}

void	float_caractere(float c, int check, double test)
{
	int		b;
	double	d;

	b = static_cast<int>(c);
	d = static_cast<double>(c);

	std::cout << "char : " << "Non displayable" << std::endl;
	
	if (test >= INT_MIN && test <= INT_MAX)
		std::cout << "int : " << b << std::endl;
	else
		std::cout << "int : " << "overflow" << std::endl;
		
	if (check == 1 || !exception(test) || test >= 100000)
	{
		std::cout << "float : " << c << "f" << std::endl;
		std::cout << "double : " << d << std::endl;
	}
	else
	{
		std::cout << "float : " << c << ".0f" << std::endl;
		std::cout << "double : " << d << ".0" << std::endl;
	}
}

int main(int ac, char **av) {

	double 				test;
	char				*p;
	int					check_double = 0;
	int 				length;
	
	std::string 		str;
	std::ostringstream 	s;

	if (ac == 2)
	{
		test = strtod(av[1], &p);
		s << test;
		str = s.str();
		length = str.length();
		if (strlen(av[1]) > 1)
		{
			for (int i = 0; i < length; i++)
			{
				if (str[i] == '.')
				{
					check_double = 1;
					break;
				}
			}
		}
		if (strlen(av[1]) > 1 && *p)
		{
			if (p[1] == '\0' && p[0] == 'f')
				;
			else
				return (ft_error(av[1]));
		}
		if (strlen(av[1]) == 1 && !isdigit(av[1][0]))
			char_caractere(av[1][0]);
		if (strlen(av[1]) != 1 && p[0] == 'f')
			float_caractere(strtof(av[1], &p), check_double, test);
		if (test >= INT_MIN && test <= INT_MAX && !*p && check_double == 0)
			int_caractere(atoi(av[1]), test);
		else if (!*p)
			double_caractere(test, check_double, test);	
	}
	return (0);
}