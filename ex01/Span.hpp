/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 23:23:20 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/29 23:33:11 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>

class Span{
    private:
        unsigned int N;
        std::vector<int> arr;
    public:
        Span();
        Span(unsigned int N);
        ~Span();

        Span(const Span& other);
        Span &operator=(const Span& other);

        void addNumber(unsigned int num);
        unsigned int shortestSpan();
        unsigned int longestSpan();
};
#endif