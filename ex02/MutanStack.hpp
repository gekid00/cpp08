#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <stack>
#include <deque>

template <typename T>
class MutanStack : public std::stack<T>
{
	public:
		MutanStack() {}
		MutanStack(const MutanStack& other) : std::stack<T>(other) {}
		MutanStack& operator=(const MutanStack& other)
		{
			std::stack<T>::operator=(other);
			return *this;
		}
		~MutanStack() {}
		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;
		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
		const_iterator begin() const { return this->c.begin(); }
		const_iterator end() const { return this->c.end(); }

};

#endif