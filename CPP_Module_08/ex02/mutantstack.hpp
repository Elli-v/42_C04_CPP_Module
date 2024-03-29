/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 04:50:03 by soooh             #+#    #+#             */
/*   Updated: 2022/02/07 20:01:39 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(MutantStack const &other);
	virtual ~MutantStack() {};
	MutantStack<T> &operator=(MutantStack<T> const &other);
	//typedef typename -> typedef로 재정의 되었다는 뜻
    // std::stack<T>::container_type::iterator -> iterator로 부르겠다
	typedef typename MutantStack<T>::stack::container_type::iterator iterator;
	typedef typename MutantStack<T>::stack::container_type::reverse_iterator riterator;
	typedef typename MutantStack<T>::container_type::const_iterator conterator;
	typedef typename MutantStack<T>::container_type::const_reverse_iterator reconterator;
	iterator begin();
	iterator end();
	conterator begin() const;
	conterator end() const;
	riterator rbegin();
	riterator rend();
	reconterator rbegin() const;
	reconterator rend() const;
};
#endif