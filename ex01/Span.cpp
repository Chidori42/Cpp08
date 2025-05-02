/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 23:23:00 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/05/01 20:09:01 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){

}
Span::Span(unsigned int N){
    setN(N);
}
Span::~Span(){

}   
Span::Span(const Span& other){
    setN(other.N);
    setArr(other.arr);
}
Span &Span::operator=(const Span& other){
    if (this != &other){
        setN(other.N);
        setArr(other.arr);
    }
    return (*this);
}

unsigned int Span::getN() const{
    return (this->N);
}
void Span::setN(const unsigned int N){
    this->N = N;
}
std::vector<unsigned int> Span::getArr() const{
    return (this->arr);
}
void Span::setArr(const std::vector<unsigned int> v){
    this->arr = v;
}
void Span::addNumber(unsigned int num){
    if (getArr().size() < N)
        this->arr.push_back(num);
    else
        throw "Out Of Bound";
}
unsigned int Span::shortestSpan(){
    if (getArr().empty()){
        throw "Empty array";
    }
    else if (getArr().size() == 1){
        throw "Minimum Two Numbers";
    }
    std::vector<unsigned int> values;
    std::vector<unsigned int>::iterator v_it;
    std::vector<unsigned int> v = getArr();
    for (unsigned int i = 0; i < v.size() ; i++){
        for (unsigned int j = i + 1; j < v.size() ; j++){
            if (abs(v[i] - v[j]))
                values.push_back(abs(v[i] - v[j]));
        }
    }
    v_it = std::min_element(values.begin(), values.end());
    return (*v_it);
    
}
unsigned int Span::longestSpan(){
    if (getArr().empty()){
        throw "Empty array";
    }
    else if (getArr().size() == 1){
        throw "Minimum Two Numbers";
    }
    std::vector<unsigned int> v = getArr();
    std::vector<unsigned int> ::iterator min = std::min_element(v.begin(), v.end());
    std::vector<unsigned int> ::iterator max = std::max_element(v.begin(), v.end());
    unsigned int long_span = *max - *min;
    return (long_span);
    return (0);
}