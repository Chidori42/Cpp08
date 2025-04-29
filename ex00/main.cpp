/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 22:44:57 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/29 23:20:52 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
    try{
        std::vector<int> my_v;
        my_v.push_back(1);
        my_v.push_back(58);
        my_v.push_back(75);
        my_v.push_back(38);
        easyfind(my_v, 58);
    }catch (char const *str){
        std::cout << str << std::endl;
    }
    return (0);
}