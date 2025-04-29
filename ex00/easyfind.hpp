/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 22:40:28 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/29 23:21:12 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

template <typename T>

void easyfind(T &container, int value){
    if (std::find(container.begin(), container.end(), value) != container.end())
        std::cout << "Found it" << std::endl;
    else
        throw "Not found";
}




#endif