/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 17:43:28 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/22 17:19:53 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(42);
	v.push_back(20);

	std::cout << "===== container =====" << std::endl;
	int	len = v.size();
	for (int i = 0; i < len; i++)
		std::cout << i << " : " << v[i] << std::endl;

	std::cout << std::endl;

	try
	{
		std::cout << "[ test : 42 ] " << std::endl;
		std::vector<int>::iterator it = easyfind(v, 42);
		std::cout << (it - v.begin()) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error : " << e.what() << std::endl;
	}
	try
	{
		std::cout << "[ test : 20 ] " << std::endl;
		std::vector<int>::iterator it = easyfind(v, 20);
		std::cout << (it - v.begin()) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error : " << e.what() << std::endl;
	}
	try
	{
		std::cout << "[ test : 0 ] " << std::endl;
		std::vector<int>::iterator it = easyfind(v, 0);
		std::cout << (it - v.begin()) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error : " << e.what() << std::endl;
	}
	return (0);
}

