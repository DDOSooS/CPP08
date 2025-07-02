#pragma once
#include <algorithm>
#include <stdexcept>
#include <iostream>

class Span
{
    private:
        int _size;
    
    public:
        Span(int size);
        Span(const Span& other) ;
        Span& operator=(const Span& other);
        ~Span();
        void addNumber(int number);
        int shortestSpan() const;
        int longestSpan() const;

};