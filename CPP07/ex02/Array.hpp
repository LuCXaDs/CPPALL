#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>
# include <string>


template<typename T >
class Array
{
	public:

		Array<T>();
		Array<T>( Array const & src );
		Array<T>( unsigned int n );

		~Array<T>();

		Array<T> &		operator=( Array<T> const & rhs );
		T &				operator[](int index );

		class Expt : public std::exception
        {
            public:
                virtual const char* what() const throw()
                { return ("EXCEPTION"); }
        };

		int		size(void) const;
		T*		get_array(void) const;
		void	fill_array(T name, size_t n);

	private:
		T 		*_array;
		size_t	_length;

};
#include "Array.tpp"

#endif /* *********************************************************** ARRAY_H */	