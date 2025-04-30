/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 23:23:20 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/30 09:49:36 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <iterator>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>

class Span{
    private:
        unsigned int N;
        std::vector<unsigned int> arr;
    public:
        Span();
        Span(unsigned int N);
        ~Span();

        Span(const Span& other);
        Span &operator=(const Span& other);

        unsigned int getN() const;
        void setN(const unsigned int N);
        std::vector<unsigned int> getArr() const;
        void setArr(const std::vector<unsigned int> v);

        void addNumber(unsigned int num);
        unsigned int shortestSpan();
        unsigned int longestSpan();
};
#endif