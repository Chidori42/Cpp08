/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:04:39 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/30 12:05:13 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>
#include <cstddef>

template<typename T>
class MutantStack{
    private:
        T Data;
        size_t size;
    public:
        class iterator {
            private:
                T *current;
            public:
                iterator& operator++() { ++current; return *this; }
                iterator operator++(int) { iterator temp(*this); ++(*this); return temp; }
                iterator& operator--() { --current; return *this; }
                iterator operator--(int) { iterator temp(*this); --(*this); return temp;}
                bool operator==(const iterator& other) const { return current == other.current; }
                bool operator!=(const iterator& other) const { return !(*this == other); }
                // T operator*(const iterator& other){return ();}

        };

        MutantStack(){

        }
        ~MutantStack(){

        }
        MutantStack(const MutantStack &other){

        }

        MutantStack &operator=(const MutantStack &other){

        }

        void push(const T &value){

        }
        void pop(){

        }
        T top() const{

        }

        iterator begin() const{
            
        }
        iterator end() const{
            
        }
        std::size_t size() const{
            
        }
};

#endif