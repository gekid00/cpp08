#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept>
#include <algorithm>
#include <limits>

class Span
{
	private:
		unsigned int _N;
		std::vector<int> _numbers;
	public:
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();
		void addNumber(int number);
		long long shortestSpan() const;
		long long longestSpan() const;

		template <typename T>
		void addRange(T begin, T end)
		{
			for (T it = begin; it != end; ++it)
				addNumber(*it);
		}
};

#endif