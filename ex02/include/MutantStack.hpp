/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 21:18:27 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/29 15:50:58 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
  public:
	// コンストラクタ・挿入演算子は基底クラス（std::stack）のものを使用
	MutantStack() : std::stack<T, Container>() {}
	MutantStack(const MutantStack &src) : std::stack<T, Container>(src) {}
	~MutantStack() {}

	MutantStack &operator=(const MutantStack &src)
	{
		if (&src != this)
			std::stack<T, Container>::operator=(src);
		return (*this);
	}

	typedef typename Container::iterator				iterator;
	typedef typename Container::const_iterator			const_iterator;
	typedef typename Container::reverse_iterator		reverse_iterator;
	typedef typename Container::const_reverse_iterator	const_reverse_iterator;

	iterator				begin()			{ return (this->c.begin()); }
	iterator				end()			{ return (this->c.end()); }
	const_iterator			begin() const	{ return (this->c.begin()); }
	const_iterator			end() const		{ return (this->c.end()); }
	reverse_iterator		rbegin()		{ return (this->c.rbegin()); }
	reverse_iterator		rend()			{ return (this->c.rend()); }
	const_reverse_iterator	rbegin() const	{ return (this->c.rbegin()); }
	const_reverse_iterator	rend() const	{ return (this->c.rend()); }

	// push(), top(), pop(), size() は本家std::stackを継承
};

#endif

// =================================== std::stack =======================================

// template<typename _Tp, typename _Sequence = std::deque<_Tp> >
// class stack
// {
// 	public:
// 		typedef typename	_Sequence::value_type		value_type;
// 		typedef typename	_Sequence::reference		reference;
// 		typedef typename	_Sequence::const_reference	const_reference;
// 		typedef typename	_Sequence::size_type		size_type;
// 		typedef				_Sequence					container_type;

// 	protected:
// 		_Sequence	c; // <- iteratorを扱うコンテナ（std::deque）

// 	public:
// 		stack();
// 		stack(const _Sequence& __c);
// 		stack(_Sequence&& __c);
		
// 		// Returns true if the %stack is empty.
// 		bool empty() const { return c.empty(); }

// 		// Returns the number of elements in the %stack.
// 		size_type size() const { return c.size(); }

// 		// Returns a read/write reference to the data at the first element of the %stack.
// 		reference top() { return c.back(); }

// 		// Returns a read-only (constant) reference to the data at the first element of the %stack.
// 		const_reference top() const{ return c.back(); }

// 		// Add data to the top of the %stack.
// 		void push(const value_type& __x) { c.push_back(__x); }
		
// 		// Removes first element.
// 		void pop() { c.pop_back(); }

// 		// Stack equality comparison.
// 		template<typename _Tp, typename _Seq>
// 		inline bool operator==(const stack<_Tp, _Seq>& __x, const stack<_Tp, _Seq>& __y) { return __x.c == __y.c; }
// };


// =================================== std::deque =======================================

// template<typename _Tp, typename _Alloc = std::allocator<_Tp> >
// class deque : protected _Deque_base<_Tp, _Alloc>
// {
// 	public:
// 		typedef 			_Tp										value_type;
// 		typedef typename	_Alloc_traits::pointer					pointer;
// 		typedef typename	_Alloc_traits::const_pointer			const_pointer;
// 		typedef typename	_Alloc_traits::reference				reference;
// 		typedef typename	_Alloc_traits::const_reference			const_reference;
// 		typedef typename	_Base::iterator							iterator;
// 		typedef typename	_Base::const_iterator					const_iterator;
// 		typedef				std::reverse_iterator<const_iterator>	const_reverse_iterator;
// 		typedef				std::reverse_iterator<iterator>			reverse_iterator;
// 		typedef				size_t									size_type;
// 		typedef				ptrdiff_t								difference_type;
// 		typedef				_Alloc									allocator_type;
// };
