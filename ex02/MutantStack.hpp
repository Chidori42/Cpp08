/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:04:39 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/30 23:54:36 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>
#include <list>
#include <cstddef>

template<typename T>
class MutantStack : public std::stack<T>{
    public:
        using iterator = typename std::deque<T>::iterator;
        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }
};

#endif