/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-04 07:26:29 by aghergho          #+#    #+#             */
/*   Updated: 2025-07-04 07:26:29 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Span.hpp"
#include <cstdlib>
#include <ctime>

void         randomGenerate(std::vector<int> &numbers,size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        int random_number = rand() % 100000; 
        std::cout << "Random number generated: " << random_number << std::endl;
        numbers.push_back(random_number);
    }
}

int main()
{
    srand(time(NULL)); 
    try
    {
        Span sp = Span(6);
        sp.addNumber(6);
        sp.addNumber(12);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        // size_t size = 50000;

        // Span sp = Span(size);
        // std::vector <int> numbers;

        // numbers.reserve(size);
        // randomGenerate(numbers, size);
        // sp.insertNumber(numbers.begin(), numbers.end());
        // std::cout << "Numbers in Span: size: " << sp.getSize() << std::endl;
        // std::cout << "---------------------[ Numbers in Span ] ---------------------" << std::endl;
        // std::cout << "=============================================================" << std::endl;
        
        // std::vector<int> spanNumbers = sp.getNumbers();
        // std::cout << "MAX :" << *std::max_element(spanNumbers.begin(), spanNumbers.end()) << std::endl;
        // std::cout << "MIN :" << *std::min_element(spanNumbers.begin(), spanNumbers.end()) << std::endl;
        
        // std::cout << "[ Longest Span: " << sp.longestSpan() << " ]" << std::endl;
        // std::cout << "=============================================================" << std::endl;
        // std::cout << "[ Shortest Span: " << sp.shortestSpan() << " ]" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}