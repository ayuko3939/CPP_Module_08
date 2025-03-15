/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 17:38:57 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/21 19:09:22 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

class EasyFindException : public std::exception
{
  public:
	virtual const char *what() const throw()
	{
		return ("element not found");
	}
};

template <typename T>
typename T::iterator easyfind(T &data, int num)
{
	typename T::iterator it;

	it = std::find(data.begin(), data.end(), num);
	if (it == data.end())
		throw (EasyFindException());
	return (it);
}

template <typename T>
typename T::const_iterator easyfind(const T &data, int num)
{
	typename T::const_iterator it;

	it = std::find(data.begin(), data.end(), num);
	if (it == data.end())
		throw (EasyFindException());
	return (it);
}

#endif