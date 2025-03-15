/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 21:39:22 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/28 20:42:32 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm> // std::sort
# include <vector>
# include <numeric> // std::adjacent_difference

class Span
{
  private:
	std::vector<int> _numbers;
	unsigned int _size;

  public:
	Span();
	Span(unsigned int size);
	Span(const Span &src);
	~Span();

	Span &operator=(const Span &src);

	void addNumber(int num);
	void fillNumber();
	unsigned int shortestSpan();
	unsigned int longestSpan();
	void printNumber();

	class TooManyElementsException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class TooFewElementsException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

#endif