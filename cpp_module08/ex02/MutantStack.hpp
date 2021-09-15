#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template<typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{
	public:
		typedef typename std::stack<T, container>::container_type::iterator iterator;
		typedef typename std::stack<T, container>::container_type::const_iterator	 const_iterator;
		typedef typename std::stack<T, container>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T, container>::container_type::const_reverse_iterator const_reverse_iterator;
		MutantStack(){}
		MutantStack(const MutantStack& mt){*this = mt;}
		MutantStack &operator=(const MutantStack& mt){
			std::stack<T, container>::operator=(mt);
			return(*this);
		}
		~MutantStack(){}
		iterator begin(){return this->c.begin(); }
		iterator end(){return this->c.end(); }
		const_iterator cbegin() const {return this->c.cbegin();}
		const_iterator cend() const {return this->c.cend();}
		reverse_iterator rbegin(){return this->c.rbegin();}
		reverse_iterator rend(){return this->c.rend();}
		const_reverse_iterator crbegin() const {return this->c.crbegin();}
		const_reverse_iterator crend() const {return this->c.crend();}	
};

#endif