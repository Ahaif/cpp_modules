
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <list>
#include <stack>
#include <algorithm>
#include <iterator>

template <class T, class Container = std :: deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack(): std::stack<T, Container>() {}
		MutantStack(const MutantStack & src): std::stack<T, Container>(src){}
		MutantStack & operator = ( const MutantStack & rhs )
		{
			if (this == &rhs )
				return (*this);
			this->c = rhs.c;
			return (*this);
		};
		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }

};

#endif