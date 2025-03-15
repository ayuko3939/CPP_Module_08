/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 21:39:22 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/28 21:14:10 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// ===================== Constructor & Destructor =====================

Span::Span()
: _numbers(0), _size(0)
{}

Span::Span(unsigned int size)
: _numbers(0), _size(size)
{}

// std::vectorのコピーコンストラクタは、デフォルトでディープコピーをする
Span::Span(const Span &src)
: _numbers(src._numbers), _size(src._size)
{}

Span::~Span()
{}

// ============================= Operator =============================

// std::vectorの代入演算子は、デフォルトでclear()してディープコピーする
Span &Span::operator=(const Span &src)
{
	if (&src != this)
	{
		_size = src._size;
		_numbers = src._numbers;
	}
	return (*this);
}

// ========================== Public function =========================

void Span::addNumber(int num)
{
	if (_numbers.size() == _size)
		throw (TooManyElementsException());
	_numbers.push_back(num);
}

void Span::fillNumber()
{
	if (_numbers.size() == _size)
		throw (TooManyElementsException());
	
	srand(time(NULL));
	while (_numbers.size() != _size)
	{
		int num = rand() % 10000;
		if (rand() % 2)
			num *= -1;
		_numbers.push_back(num);
	}
}

unsigned int Span::shortestSpan()
{
	if (_numbers.size() < 2)
		throw (TooFewElementsException());
	
	// ソートしたコンテナを作成
	std::vector<int> sorted(_numbers);
	std::sort(sorted.begin(), sorted.end());

	// sortedの隣り合う値の差をdifferenceに書き込む
	std::vector<int> difference(sorted.size());
	std::adjacent_difference(sorted.begin(), sorted.end(), difference.begin());
	
	// difference[0]はsortedの最初の要素なのでdifference[1]から見る
	int shortest = *std::min_element(difference.begin() + 1, difference.end());

	return (shortest);
}

unsigned int Span::longestSpan()
{
	if (_numbers.size() < 2)
		throw (TooFewElementsException());

	// std::*_element は、イテレーターを返すので '*' で値を取得する
	int min = *std::min_element(_numbers.begin(), _numbers.end());
	int max = *std::max_element(_numbers.begin(), _numbers.end());
	
	return (abs(max - min));
}

void Span::printNumber()
{
	int	len = _numbers.size();

	for (int i = 0; i < len; i++)
		std::cout << "[" << i << "] " << _numbers[i] << ", ";
}

// ============================= Exception ============================

const char *Span::TooManyElementsException::what() const throw()
{
	return ("Too many elements");
}

const char *Span::TooFewElementsException::what() const throw()
{
	return ("Too few elements");
}
