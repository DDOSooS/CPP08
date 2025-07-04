/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-04 07:27:05 by aghergho          #+#    #+#             */
/*   Updated: 2025-07-04 07:27:05 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <algorithm>

template <typename T>
int easyfind(T container, int toFind)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), toFind);
    if (it != container.end())
        return *it;
    throw std::runtime_error("Value not found in the container");
}