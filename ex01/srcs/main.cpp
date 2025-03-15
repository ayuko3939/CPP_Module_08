/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 20:14:12 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/28 21:20:12 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}

// int main()
// {
// 	std::cout << "========== test1 ==========" << std::endl;

// 	Span sp(5);

// 	sp.addNumber(10);
// 	sp.addNumber(20);
// 	sp.addNumber(30);
// 	sp.addNumber(42);
// 	sp.addNumber(20);

// 	sp.printNumber();
// 	std::cout << std::endl;
// 	std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
// 	std::cout << "Longest Span  : " << sp.longestSpan() << std::endl;

// 	try
// 	{
// 		sp.addNumber(42);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << "Add Number    : " << e.what() << std::endl;
// 	}

// 	std::cout << std::endl;
// 	std::cout << "========== test2 ==========" << std::endl;

// 	Span sp1(1);

// 	sp1.addNumber(1);
// 	sp1.printNumber();
// 	std::cout << std::endl;

// 	try
// 	{
// 		std::cout << "Shortest Span : " << sp1.shortestSpan() << std::endl;
		
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	try
// 	{
// 		std::cout << "Longest Span  : " << sp1.longestSpan() << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}

// 	std::cout << std::endl;
// 	std::cout << "========== test3 ==========" << std::endl;

// 	Span sp2(5);
	
// 	sp2.fillNumber();
// 	sp2.printNumber();
// 	std::cout << std::endl;
// 	std::cout << "Shortest Span : " << sp2.shortestSpan() << std::endl;
// 	std::cout << "Longest Span  : " << sp2.longestSpan() << std::endl;
// 	std::cout << std::endl;

// 	return (0);
// }
