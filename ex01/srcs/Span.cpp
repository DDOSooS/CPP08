/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-04 07:28:16 by aghergho          #+#    #+#             */
/*   Updated: 2025-07-04 07:28:16 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span(int size) : _size(size)
{
    std::cout << "[SPAN] Constructor called with size: " << size << std::endl;
    if (size <= 0)
        throw std::invalid_argument("Size must be greater than 0");
    this->_numbers.reserve(size);
}

Span::Span(const Span& other) : _size(other._size), _numbers(other._numbers)
{
    std::cout << "[SPAN] Copy constructor called" << std::endl;
}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        this->_numbers.clear();
        this->_size = other._size;
        this->_numbers = other._numbers;
    }
    return *this;
}

void Span::addNumber(int number)
{
    if (this->_numbers.size() == static_cast<size_t> (this->_size))
        throw std::runtime_error("Span is full, cannot add more numbers");
    this->_numbers.push_back(number);
}


int Span::shortestSpan()
{
    if (this->_numbers.size() < 2)
        throw std::runtime_error("Not enough numbers to find a the Shortest span");
    int short_span;
    std::sort(this->_numbers.begin(), this->_numbers.end());
    short_span = std::abs(this->_numbers[1] - this->_numbers[0]);
    for (size_t i = 1; i < this->_numbers.size() - 1; ++i)
    {
        int tmp = std::abs(this->_numbers[i + 1] - this->_numbers[i]);
        if (tmp < short_span)
            short_span = tmp;
    }
    return short_span;
}

int Span::longestSpan()
{
    if (this->_numbers.size() < 2)
    {
        throw std::runtime_error("Not enough numbers to find a the Longest span");
    }
    return (* std::max_element(this->_numbers.begin(), this->_numbers.end()) - 
            * std::min_element(this->_numbers.begin(), this->_numbers.end()));
}

void Span::insertNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    size_t numbers_to_insert = std::distance(begin, end);
    if (this->_numbers.size() + numbers_to_insert > static_cast<size_t>(this->_size))
        throw std::runtime_error("Not enough space to insert numbers");
    this->_numbers.insert(this->_numbers.end(), begin, end);
}

std::vector<int> Span::getNumbers() const
{
    return this->_numbers;
}

int Span::getSize() const
{
    return this->_size;
}

Span::~Span()
{
    std::cout << "[Span] Destructor is being Called " << std::endl;
}