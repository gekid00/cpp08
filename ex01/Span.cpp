#include "Span.hpp"

Span::Span(unsigned int N) : _N(N)
{
}

Span::Span(const Span& other) : _N(other._N), _numbers(other._numbers)
{
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_N = other._N;
		_numbers = other._numbers;
	}
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(int number)
{
	if (_numbers.size() >= _N)
		throw std::runtime_error("Span is full");
	_numbers.push_back(number);
}

long long Span::shortestSpan() const
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enough numbers");

	std::vector<int> sortedNumbers = _numbers;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());

	long long minSpan = static_cast<long long>(std::numeric_limits<int>::max()) - static_cast<long long>(std::numeric_limits<int>::min());
	minSpan++;
	for (size_t i = 1; i < sortedNumbers.size(); ++i)
	{
		long long span = static_cast<long long>(sortedNumbers[i]) - static_cast<long long>(sortedNumbers[i - 1]);
		if (span < minSpan)
			minSpan = span;
	}
	return minSpan;
}

long long Span::longestSpan() const
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enough numbers to find a span");
	long long min = *std::min_element(_numbers.begin(), _numbers.end());
	long long max = *std::max_element(_numbers.begin(), _numbers.end());
	return max - min;
}

