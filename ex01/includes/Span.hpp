/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-04 07:28:05 by aghergho          #+#    #+#             */
/*   Updated: 2025-07-04 07:28:05 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <vector>
#include <climits>

class Span
{
    private:
        int _size;
        std::vector<int> _numbers;
    public:
        Span(int size);
        Span(const Span& other) ;
        Span& operator=(const Span& other);
        ~Span();
        void addNumber(int number);
        int shortestSpan() ;
        int longestSpan() ;
        std::vector<int> getNumbers() const;
        int getSize() const ;
        void insertNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};